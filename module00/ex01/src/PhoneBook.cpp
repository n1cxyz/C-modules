/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:34:50 by dasal             #+#    #+#             */
/*   Updated: 2024/08/16 14:34:52 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook() : max(8), current(0), amount(0) {
};

PhoneBook::~PhoneBook() {
};

void	PhoneBook::addContact() {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string secret;

	if (current == 8)
		current = 0;
	system("clear");
	while (1) {
		std::cout << "Firstname: ";
		std::getline(std::cin, firstName);
		if (firstName.compare(""))
			break; 
	}
	while (1) {
		std::cout << "Lastname: ";
		std::getline(std::cin, lastName);
		if (lastName.compare(""))
			break;
	}
	while (1) {
		std::cout << "Nickname: ";
		std::getline(std::cin, nickName);
		if (nickName.compare(""))
			break;
	}
	while (1) {
		std::cout << "Phone number: ";
		std::getline(std::cin, phoneNumber);
		if (phoneNumber.compare(""))
			break;
	}
	while (1) {
		std::cout << "Enter a secret: ";
		std::getline(std::cin, secret);
		if (secret.compare(""))
			break;
	}
	system("clear");
	contacts[current].set_firstName(firstName);
	contacts[current].set_lastName(lastName);
	contacts[current].set_nickName(nickName);
	contacts[current].set_phoneNumber(phoneNumber);
	contacts[current].set_secret(secret);
	current++;
	if (amount < 8)
		amount++;
};

void	PhoneBook::searchContact() {
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secret;
	std::string	entry;
	int			i = 0;
	int			index;

	if (amount < 1) {
		std::cout << "No entries have been made\n";
		sleep(1);
		return ;
	}
	system("clear");
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "Firstname" << "|";
	std::cout << std::setw(10) << "Lastname" << "|";
	std::cout << std::setw(10) << "Nickname" << "\n";
	while (i < max) {
		firstName = contacts[i].get_firstName();
		lastName = contacts[i].get_lastName();
		nickName = contacts[i].get_nickName();
		phoneNumber = contacts[i].get_phoneNumber();
		secret = contacts[i].get_secret();
		if (firstName.length() > 9)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 9)
			lastName = lastName.substr(0, 9) + ".";
		if (nickName.length() > 9)
			nickName = nickName.substr(0, 9) + ".";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << firstName << "|";
		std::cout << std::setw(10) << lastName << "|";
		std::cout << std::setw(10) << nickName << "\n";
		i++;
	}
	std::cout << "Index of entry to display: ";
	std::getline(std::cin, entry);
	index = atoi(entry.c_str());
	if ((index < 0 || index > 7) || (index != (entry[0] - '0')) ||
	(index > this->amount - 1)) {
		system("clear");
		PhoneBook::searchContact();
	}
	else {
		std::cout << "Firstname: " << contacts[index].get_firstName() << "\n";
		std::cout << "Lastname: " << contacts[index].get_lastName() << "\n";
		std::cout << "Nickname: " << contacts[index].get_nickName() << "\n";
		std::cout << "Phone number: " << contacts[index].get_phoneNumber() << "\n";
		std::cout << "Secret: " << contacts[index].get_secret() << "\n";
	}
};
