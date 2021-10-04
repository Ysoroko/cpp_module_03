/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:56:06 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 13:57:13 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"), ScavTrap(name + "_clap_trap"), FragTrap(name + "_clap_trap")
{
	this->_name = name;
	std::cout << "Shiny DiamondTrap " << name << " entered the room!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Shiny DiamondTrap " << this->_name << " shines no more...\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const & ref) : ClapTrap(ref.get_name()), ScavTrap(ref.get_name() + "_scav_trap"), FragTrap(ref.get_name() + "_clap_trap")
{
	this->_name = ref.get_name();
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & ref)
{
	this->_name = ref.get_name();
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is " << this->get_name() << std::endl;
}