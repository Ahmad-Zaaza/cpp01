/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:33 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 18:34:25 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H

# define PHONE_BOOK_H

# include <iostream>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie();
	~Zombie(void);
	void announce(void);
	std::string get_name(void);
	void set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif