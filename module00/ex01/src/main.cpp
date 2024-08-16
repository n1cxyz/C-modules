/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:34:45 by dasal             #+#    #+#             */
/*   Updated: 2024/08/16 14:34:47 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void) {

	PhoneBook	PhoneBook;
	std::string	add = "ADD";
	std::string	search = "SEARCH";
	std::string exit = "EXIT";
	std::string	input;

	while(1) {
		//system("clear");
		std::cout << "Type ADD, SEARCH or EXIT\n"; 
		std::getline(std::cin, input);
		if (!input.compare(add))
			PhoneBook.addContact();
		else if (!input.compare(search))
			PhoneBook.searchContact();
		else if (!input.compare(exit)) {
			std::cout << "BYE BYE\n";
			sleep(1);
			system("clear");
			break;
		}
	}
	return 0;
}
