/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:16 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 19:06:18 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H

# define HUMAN_B_H

# include "./Weapon.hpp"
# include <ostream>

class HumanB
{
  private:
	std::string _name;
	Weapon *_weapon;

  public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon *w);
	void attack();
};

#endif