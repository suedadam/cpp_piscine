/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 20:50:49 by asyed             #+#    #+#             */
/*   Updated: 2018/06/28 21:35:56 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	int						itt;
	std::string::iterator	i;
	std::string				str;
	std::string				all;

	if (argc < 2)
		return (EXIT_FAILURE);
	itt = 1;
	while (itt < argc)
	{
		str.assign(argv[itt]);
		i = str.begin();
		while (i != str.end())
		{
			if (*i >= 'a' && *i <= 'z')
				*i -= 32;
			i++;
		}
		all += str;
		itt++;
	}
	std::cout << all << std::endl;
}
