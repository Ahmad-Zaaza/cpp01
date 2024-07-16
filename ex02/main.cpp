/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:24 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/06/24 22:33:29 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "str address is: " << std::hex << &str << std::endl;
	std::cout << "*ptr address is: " << std::hex << ptr << std::endl;
	std::cout << "&ref address is: " << std::hex << &ref << std::endl;

	std::cout << "str value is: " << str << std::endl;
	std::cout << "*ptr value is: " << *ptr << std::endl;
	std::cout << "&ref value is: " << ref << std::endl;

	return (0);
}