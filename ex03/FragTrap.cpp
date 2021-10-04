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
	std::cout << "FragTrap " << this->_name << " perished...\n";
}

void FragTrap::attack(std::string const & target)
{
	std::string		class_name = "Fragtrap";
	std::string		name = this->_name;
	unsigned int	dmg = this->_attack_damage;
	unsigned int	attack_energy_cost = this->get_class_attack_energy_cost();
	unsigned int	current_energy_points = this->_energy_points;

	if (this->_hitpoints == 0)
	{
		std::cout << class_name << " " << name << " wishes he could attack but he's dead\n";
		return ;
	}
	if (current_energy_points >= attack_energy_cost)
	{
		std::cout << class_name << " " << name << " performs a magnificent Fragtrap attack on " << target << ", damaging it by "
	<< dmg << " hp!\n";
		std::cout << "This attack used up " << name << "'s " << attack_energy_cost << " energy points\n";
		this->_energy_points -= attack_energy_cost;
	}
	else
	{
		std::cout << name << " has no energy to attack\n";
	}
	std::cout << name << " now has " << this->_energy_points << " energy left\n";
}