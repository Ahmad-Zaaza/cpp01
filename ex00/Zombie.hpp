/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:47 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/06/24 22:33:29 by ahmadzaaza       ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
	std::string get_name(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif