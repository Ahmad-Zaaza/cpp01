/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:56 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/06/24 22:33:29 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

std::string const Harl::levels[4] = {"debug", "warning", "info", "error"};

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
					years whereas you started working here since last month."
				<< std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	static void (Harl::*log[])(void) = {&Harl::debug, &Harl::warning,
		&Harl::info, &Harl::error};
	for (int i = 0; i < 4; i += 1)
	{
		if (levels[i] == level)
		{
			(this->*log[i])();
			return ;
		}
	}
	std::cout << "Complaining about more serious problems!" << std::endl;
}
