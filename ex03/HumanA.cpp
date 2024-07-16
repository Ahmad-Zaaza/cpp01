/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:21 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 19:02:25 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include <ostream>

HumanA::HumanA(std::string name, Weapon &w) : _name(name), _weapon(w)
{
}
HumanA::~HumanA()
{
}

void HumanA::setWeapon(Weapon const &w)
{
	this->_weapon = w;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
