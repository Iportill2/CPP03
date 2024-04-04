/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:51:06 by imontero          #+#    #+#             */
/*   Updated: 2024/04/04 15:09:21 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "Unknown";
	setHp(FragTrap::_hitPoints);
	setEp(ScavTrap::_energyPoints);
	setAt(FragTrap::_attackDamage);
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name") 
{
	this->_name = name;
	setHp(FragTrap::_hitPoints);
	setEp(ScavTrap::_energyPoints);
	setAt(FragTrap::_attackDamage);

	std::cout << "💎 DiamondTrap parametrized constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = copy;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name;
	std::cout << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}



