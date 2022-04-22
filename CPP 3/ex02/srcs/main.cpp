/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:08:51 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/22 12:33:40 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
//clang++ main.cpp ClapTrap.cpp

int main (void)
{
	std::cout << "______________________________"<< std::endl;
	ClapTrap a("Pepe");
	
	a.attack("Juan");
	a.takeDamage(3);
	a.beRepaired(3);
	std::cout << "______________________________"<< std::endl;
	ScavTrap b("Pedro");
	b.guardGate();
	b.attack("Juan");
	std::cout << "______________________________"<< std::endl;
	FragTrap c("Paco");
	c.highFivesGuys();
	c.attack("Juan");
	std::cout << "______________________________"<< std::endl;
	return (0);
}