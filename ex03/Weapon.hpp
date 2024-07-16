/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:12 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 18:51:56 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H

# define WEAPON_H

# include <iostream>

class Weapon
{
  private:
	std::string _type;

  public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const &getType();
	void setType(std::string const type);
};

#endif