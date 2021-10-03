/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:53:28 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/03 17:53:28 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, "FragTrap", 100, 100, 30, 100)
{
	this->set_name(name);
	std::cout << "A wild Fragtrap " << name << " appears!\n";
}

FragTrap::FragTrap(FragTrap const & rhs) : ClapTrap(rhs.get_name())
{
	this->_max_hp = 100;
	this->set_name(rhs.get_name());
	this->set_attack_damage(rhs.get_attack_damage());
	this->set_energy_points(rhs.get_energy_points());
	this->set_hitpoints(rhs.get_hitpoints());
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	this->_max_hp = 100;
	this->set_name(rhs.get_name());
	this->set_attack_damage(rhs.get_attack_damage());
	this->set_energy_points(rhs.get_energy_points());
	this->set_hitpoints(rhs.get_hitpoints());
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High Five to your buddy " << this->_name << ", anyone? No?..\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is now destroyed...\n";
}