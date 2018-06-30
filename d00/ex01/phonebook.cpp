/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 09:18:37 by asyed             #+#    #+#             */
/*   Updated: 2018/06/30 09:24:48 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		this->entries[i].used = false;
		i++;
	}
}

bool	Phonebook::add(void)
{
	int			i;

	i = 0;
	while (i < 8)
	{
		if (this->entries[i].used == false)
		{
			this->entries[i].used = true;
			this->entries[i].fields[0].read("First Name: ");
			this->entries[i].fields[1].read("Last Name: ");
			this->entries[i].fields[2].read("Nickname: ");
			this->entries[i].fields[3].read("Login: ");
			this->entries[i].fields[4].read("Address: ");
			this->entries[i].fields[5].read("Email: ");
			this->entries[i].fields[6].read("Number: ");
			this->entries[i].fields[7].read("Birthday: ");
			this->entries[i].fields[8].read("Favorite meal: ");
			this->entries[i].fields[9].read("Underwear color: ");
			this->entries[i].fields[10].read("Darkest secret: ");
			return (true);
		}
		i++;
	}
	std::cerr << "Phonebook doesn't have enough pages!" << std::endl; 
	return (true);
}

void	Phonebook::search(void)
{
	std::string	sub;
	int 		i;
	int			x;

	i = 0;
	while (i < 8)
	{
		if (this->entries[i].used == true)
		{
			sub = this->entries[i].fields[0].val.substr(0, 10);
			sub.resize(10, '.');
			sub += "| ";
			sub += this->entries[i].fields[1].val.substr(0, 10);
			sub.resize(22, '.');
			sub += "| ";
			sub += this->entries[i].fields[2].val.substr(0, 10);
			sub.resize(34, '.');
			std::cout << i << " | " << sub << std::endl;
		}
		i++;
	}
	std::getline(std::cin, sub);
	if (!ft_isnumber(sub.c_str()))
	{
		std::cout << "Failed, wasn't a number" << std::endl;
		return ;
	}
	if ((i = atoi(sub.c_str())) < 0)
		return ;
	if (i < 8 && i >= 0)
	{
		std::cout << "Picked " << i << std::endl;
		x = 0;
		while (x < 11)
		{
			std::cout << this->entries[i].fields[x].constant << ": " << this->entries[i].fields[x].val << std::endl;
			x++;
		}
	}
}
