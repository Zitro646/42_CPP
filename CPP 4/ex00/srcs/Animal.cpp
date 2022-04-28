/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:55:25 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/28 16:21:20 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() : type("test")
{
	return;
}

Animal::~Animal()
{
	return;
}

Animal& Animal::operator=(Animal const & ani)
{
	this->type = ani.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Evem though im an Animal i cannot make a sound :("<< std::endl;
}