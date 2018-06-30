/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 09:17:42 by asyed             #+#    #+#             */
/*   Updated: 2018/06/30 09:21:28 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <string>
# include <iostream>
# include <ctype.h>

class Phonebook {

	class Entries {
		class Field {
		public:
			std::string	val;
			std::string constant;

			void	read(std::string const field_name);
		};

	public:
		bool		used;
		Field		fields[11];
	};

public:
	Phonebook(void);
	// ~Phonebook(void);

	bool	add(void);
	void	search(void);
private:
	Entries	entries[8];
};

bool	ft_isnumber(char const *str);

#endif