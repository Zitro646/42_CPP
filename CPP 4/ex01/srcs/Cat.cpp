/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:55:25 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/25 14:36:30 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout<<"Cat created"<<std::endl;
	return;
}

Cat::Cat(const Cat & cat)
{
	*this = cat;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout<<"Cat destroyed"<<std::endl;
	return;
}

Cat& Cat::operator=(Cat const & ani)
{
	this->type = ani.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow meowed the cat"<< std::endl;
}
