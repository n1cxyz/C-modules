/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:05:21 by dasal             #+#    #+#             */
/*   Updated: 2024/08/20 09:05:22 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie *array = new Zombie[N];
	for (int i = 0; i < N; i++) {
		array[i].setName(name);
		array[i].announce();
	}; 
	(void)name;
	return array;
};
