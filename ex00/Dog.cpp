/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:38:15 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/19 16:53:55 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructors
Dog::Dog( void ): Animal()
{
	std::cout << "Default constructor Dog" << std::endl;
	this->setType("Dog");
	return ;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	std::cout << "Copy constructor Dog" << std::endl;
	this->setType(copy.type);
	return ;
}

// destructor
Dog::~Dog( void )
{
	std::cout << "Default destructor Dog" << std::endl;
	return ;
}

// functions
Dog&	Dog::operator=(const Dog& obj)
{
	this->type = obj.type;
	return (*this); 
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOFF WOFF BARK BARK" << std::endl;
}
