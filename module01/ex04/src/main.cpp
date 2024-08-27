/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:06:20 by dasal             #+#    #+#             */
/*   Updated: 2024/08/20 09:06:21 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int main(int ac, char** av) {
	if (ac == 4) {
		std::ifstream infile(av[1]);
		if (!infile) {
        std::cerr << "Error opening input file: " << av[1] << "\n";
        return 1;
    	}
		std::ofstream outfile("outfile");
		if (!outfile) {
        std::cerr << "Error opening output file: " << "outfile" << "\n";
        return 1;
    	}
		std::string line;
		std::string s1 = av[2];
		std::string s2 = av[3];

		if (infile.is_open()) {
			while (std::getline(infile, line)) {
				size_t pos = line.find(s1);
				if (pos != std::string::npos) {
                line.erase(pos, s1.length());
				line.insert(pos, s2);
				}
				outfile << line << "\n";
			}
			infile.close();
		}
		else {
			std::cout << "error opening file\n";
		}
	}
	else {
		std::cerr << "Usage: " << av[0] << " <file> <substring to remove>" << "\n";
	}
	return 0;
};
