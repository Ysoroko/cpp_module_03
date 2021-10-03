/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:30:34 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/03 10:11:00 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// void attack(std::string const & target);
// void takeDamage(unsigned int amount);
// void beRepaired(unsigned int amount);

int	main(void)
{
	std::string s1 = "Gertrude";
	std::string s2 = "Jean-Michel";
	std::string s3 = "Gilbert";
	std::string s4 = "Muriel";

	ClapTrap claptrap1(s1);
	ScavTrap claptrap2(s2);

	claptrap1.attack(s3);
	claptrap1.takeDamage(4);
	claptrap1.takeDamage(100);

	claptrap1.beRepaired(3);
	claptrap1.beRepaired(64);

	claptrap2.attack(s4);
	claptrap2.takeDamage(7);
	claptrap1.beRepaired(3);
	claptrap2.takeDamage(1);

	return (0);
}