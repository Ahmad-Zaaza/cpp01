/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:37 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/06/24 22:33:29 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];
	int i = 0;

	while (i < N)
		zombie[i++].set_name(name);
	return (zombie);
};