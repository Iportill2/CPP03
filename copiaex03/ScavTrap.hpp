/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:51:22 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 20:00:05 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);

		ScavTrap(const ScavTrap &copy);

		ScavTrap & operator =(ScavTrap const &inst2);
		
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif
