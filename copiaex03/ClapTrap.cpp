/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:21:06 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 17:40:50 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



ClapTrap::ClapTrap(void): _name("Unknown"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "An unknown ClapTrap has been created 🐒" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "A ClapTrap has been created 🤖 Codename: " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap ⚙️ Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " shutdown 💀" << std::endl;
}

ClapTrap & ClapTrap::operator =(ClapTrap const &inst2)
{
	this->_name = inst2._name;
	this->_hitPoints = inst2._hitPoints;
	this->_energyPoints = inst2._energyPoints;

	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->isWorking())
	{
		std::cout << "💥 " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "🚫 " << this->_name << " is not working" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->isWorking())
	{
		std::cout << "🤕 " << this->_name << " takes " << amount;
		std::cout << " damage" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "🚫 " << this->_name << " is not working" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isWorking())
	{
		std::cout << "🔧 " << this->_name << " has been repaired " << amount;
		std::cout << " points" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
	else
		std::cout << "🚫 " << this->_name << " is not working" << std::endl;
}

bool	ClapTrap::isWorking(void)
{
	return (this->_energyPoints >= 0 && this->_hitPoints >= 0);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

std::string ClapTrap::getName(void)
{
	return (this->_name);
}

int		ClapTrap::getHp(void)
{
	return (this->_hitPoints);
}

void	ClapTrap::setHp(unsigned int amount)
{
	this->_hitPoints = amount;
}

int		ClapTrap::getEp(void)
{
	return (this->_energyPoints);
}

void	ClapTrap::setEp(unsigned int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::setAt(unsigned int amount)
{
	this->_attackDamage = amount;
}

void	ClapTrap::substractEp(unsigned int amount)
{
	this->_energyPoints -= amount;
}

void	ClapTrap::showStatus(void)
{
	std::cout << "📊 " << this->_name << "[hP: " << this->getHp();
	std::cout << " | eP: " << this->getEp() << "]" << std::endl;
}



