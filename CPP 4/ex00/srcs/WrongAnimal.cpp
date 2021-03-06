/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:55:25 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/20 14:14:10 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("test")
{
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal & w_ani)
{
	*this = w_ani;
	return;
}

WrongAnimal::~WrongAnimal()
{
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & ani)
{
	if (&ani == this)
		return *this;
	this->type = ani.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Evem though im the WrongAnimal i cannot make a sound :("<< std::endl;
}