/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:04:52 by dasal             #+#    #+#             */
/*   Updated: 2024/08/20 09:04:53 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << name << " has arrived" << "\n";
}

Zombie::~Zombie() {
	std::cout << name << " died... miserably." << "\n";
}
void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnzzzZ..." << "\n";
}
