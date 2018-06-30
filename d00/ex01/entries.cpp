/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entries.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 09:19:34 by asyed             #+#    #+#             */
/*   Updated: 2018/06/30 09:19:45 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::Entries::Field::read(std::string const field_name)
{
	std::string	str;

	std::cout << field_name << " ";
	std::getline(std::cin, str);
	this->val = str;
	this->constant = field_name;
}
