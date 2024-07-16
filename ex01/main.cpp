/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:28 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/06/24 22:33:29 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main(void)
{
	int count = 42;
	int i = 0;
	Zombie *zombies = zombieHorde(count, "Ahmad");
	while (i < count)
		zombies[i++].announce();
	delete[] zombies;

	return (0);
}