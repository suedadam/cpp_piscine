/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 21:53:17 by asyed             #+#    #+#             */
/*   Updated: 2018/06/30 09:19:27 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	isnumber(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	command_switch(Phonebook *test)
{
	std::string	input;

	std::getline(std::cin, input);
	if (input == "ADD")
		(*test).add();
	else if (input == "SEARCH")
		(*test).search();
	else if (input == "EXIT")
		return (false);
	else
		std::cout << "Command not found" << std::endl;
	return (true);
}

int		main(void)
{
	Phonebook	test;

	while (true)
	{
		if (command_switch(&test) == false)
			return (EXIT_FAILURE);
	}
}