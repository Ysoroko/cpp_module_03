/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:56:17 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/04 14:02:28 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

// Virtual keyword gives us::
//
//   A  		A	A
//  / \  		|	|
// B   C  not 	B	C
//  \ /  		 \ /
//   D 			  D

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		using FragTrap::_hitpoints; //100 hp ok
		using FragTrap::_attack_damage; //30 ok
		using ScavTrap::_energy_points; //50 ep ok
		using ScavTrap::attack; // "... uses a super ScavTrap attack on ..." ok

		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const & ref);
		DiamondTrap & operator=(DiamondTrap const & ref);
		void	whoAmI( void );
	private:
		std::string	_name;
};


#endif