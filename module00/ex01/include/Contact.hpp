/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:34:22 by dasal             #+#    #+#             */
/*   Updated: 2024/08/16 14:34:24 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	secret;

	public:
		Contact();
		~Contact();

		void		set_firstName(std::string name);
		void		set_lastName(std::string name);
		void		set_nickName(std::string name);
		void		set_phoneNumber(std::string number);
		void		set_secret(std::string secret);
		std::string	get_firstName();
		std::string	get_lastName();
		std::string	get_nickName();
		std::string	get_phoneNumber();
		std::string	get_secret();
	};
