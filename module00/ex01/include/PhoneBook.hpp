/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:34:34 by dasal             #+#    #+#             */
/*   Updated: 2024/08/16 14:34:36 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		
		void	addContact();
		void	searchContact();
	
	private:
		Contact	contacts[8];
		int		max;
		int		current;
		int		amount;
};
