/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:34:41 by dasal             #+#    #+#             */
/*   Updated: 2024/08/16 14:34:43 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact() {
};

Contact::~Contact() {
};

std::string	Contact::get_firstName() {
    return firstName;
};

std::string	Contact::get_lastName() {
    return lastName;
};

std::string	Contact::get_nickName() {
    return nickName;
};

std::string	Contact::get_phoneNumber() {
    return phoneNumber;
};

std::string	Contact::get_secret() {
    return secret;
};

void	Contact::set_firstName(std::string name) {
    this->firstName = name;
};

void	Contact::set_lastName(std::string name) {
    this->lastName = name;
};

void	Contact::set_nickName(std::string name) {
    this->nickName = name;
};

void	Contact::set_phoneNumber(std::string number) {
    this->phoneNumber = number;
};

void	Contact::set_secret(std::string str) {
    this->secret = str;
};

