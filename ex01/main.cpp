/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:30:34 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/03 16:01:54 by ysoroko          ###   ########.fr       */
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
	std::string s2 = "Gilbert";

	ClapTrap claptrap(s1);
	ScavTrap scavtrap(s2);

	std::cout << std::endl;
	claptrap.attack(s2);
	scavtrap.takeDamage(4);
	scavtrap.beRepaired(3);
	scavtrap.beRepaired(18);

	scavtrap.attack(s1);
	claptrap.takeDamage(9);
	scavtrap.attack(s1);
	claptrap.takeDamage(9);
	scavtrap.attack(s1);

	claptrap.beRepaired(3);
	claptrap.beRepaired(64);
	std::cout << std::endl;
	return (0);
}