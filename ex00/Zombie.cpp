/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 08:16:05 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/05/31 00:42:26 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
}

std::string Zombie::get_name()
{
	return (this->_name);
}

void Zombie::announce(void)
{
	std::cout << this->get_name() + ": BraiiiiiiinnnzzzZ..." << std::endl;
};
