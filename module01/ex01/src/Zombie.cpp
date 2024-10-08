/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:05:17 by dasal             #+#    #+#             */
/*   Updated: 2024/08/20 09:05:18 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout <<  "a new zombie has arrived" << "\n";
};

Zombie::~Zombie() {
	std::cout << name << " died... miserably." << "\n";
};
        
void    Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
};

void	Zombie::setName(std::string name) {
	this->name = name;
}
