/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:06:47 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/19 16:48:27 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// constructors
Animal::Animal( void )
{
	std::cout << "Default constructor Animal" << std::endl;
	this->type = "Animal";
	return ;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Copy constructor Animal" << std::endl;
	this->type = copy.type;
	return ;
}

// destructor
Animal::~Animal( void )
{
	std::cout << "Default destructor Animal" << std::endl;
	return ;
}

// functions
Animal&	Animal::operator=(const Animal& obj)
{
	this->type = obj.type;
	return (*this); 
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "*Animal sound*" << std::endl;
}
