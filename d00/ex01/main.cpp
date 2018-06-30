/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 21:53:17 by asyed             #+#    #+#             */
/*   Updated: 2018/06/30 13:25:18 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
