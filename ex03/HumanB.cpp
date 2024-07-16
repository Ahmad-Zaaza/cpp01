/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:17 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 19:05:39 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"
#include <ostream>

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : _name(name)
{
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon *w)
{
	this->_weapon = w;
}
void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
