/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:19 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 19:06:22 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H

# define HUMAN_A_H

# include "./Weapon.hpp"
# include <ostream>

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;

  public:
	HumanA();
	HumanA(std::string name, Weapon &w);
	~HumanA();
	void setWeapon(Weapon const &w);
	void attack();
};

#endif