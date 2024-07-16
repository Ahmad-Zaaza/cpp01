/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 08:16:05 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 18:41:18 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie() : _name("")
{
}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << " is destroyed" << std::endl;
}

std::string Zombie::get_name()
{
	return (this->_name);
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->get_name() + ": BraiiiiiiinnnzzzZ..." << std::endl;
};
