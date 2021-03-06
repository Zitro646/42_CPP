/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:08:51 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/07 16:49:40 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
//clang++ main.cpp ClapTrap.cpp

int main (void)
{
	ClapTrap a("Pepe");
	
	a.attack("Juan");
	a.takeDamage(3);
	a.beRepaired(3);

	ScavTrap b("Pedro");
	b.guardGate();
	b.takeDamage(7);
	b.attack("Juan");
	b.beRepaired(5);
	return (0);
}