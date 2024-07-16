/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:53 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/06/24 22:38:24 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H

# define HARL_H

# include <iostream>

class Harl
{
  private:
	static std::string const levels[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
};

#endif