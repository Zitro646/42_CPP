/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:07:43 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/04/20 16:15:26 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"general.hpp"

//Constructor
Contact::Contact(void)
{
	this->set_First_name("");
	this->set_Last_name("");
	this->set_Nickname("");
	this->set_Phone("");
	this->set_Darkest_secret("");
	return;
}
//Destructor
Contact::~Contact(void)
{
	std::cout<<"Destruimos el contacto"<<std::endl;
	return;
}
//Gets
std::string Contact::get_First_name(void)
{
	return (this->first_name);
}
std::string Contact::get_Last_name(void)
{
	return (this->last_name);
}
std::string Contact::get_Nickname(void)
{
	return (this->nickname);
}
std::string Contact::get_Phone(void)
{
	return (this->phone);
}
std::string Contact::get_Darkest_secret(void)
{
	return (this->darkest_secret);
}
//Sets
void Contact::set_First_name(std::string str)
{
	this->first_name = str;
}
void Contact::set_Last_name(std::string str)
{
	this->last_name = str;
}
void Contact::set_Nickname(std::string str)
{
	this->nickname = str;
}
void Contact::set_Phone(std::string str)
{
	this->phone = str;
}
void Contact::set_Darkest_secret(std::string str)
{
	this->darkest_secret = str;
}