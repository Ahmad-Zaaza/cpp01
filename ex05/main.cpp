/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:07 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/06/24 22:38:20 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(void)
{
	Harl harl;

	harl.complain("debug");
	harl.complain("warning");
	harl.complain("info");
	harl.complain("error");
	harl.complain("testing");

	return (0);
}