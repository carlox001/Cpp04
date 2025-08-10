/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:38:15 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/10 11:59:47 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructors
Dog::Dog( void ): Animal()
{
	std::cout << "Default constructor Dog" << std::endl;
	this->brain = new Brain();
	this->setType("Dog");
	return ;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	int	i;

	std::cout << "Copy constructor Dog" << std::endl;
	this->brain = new Brain();
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	this->setType(copy.type);
	return ;
}

// destructor
Dog::~Dog( void )
{
	std::cout << "Default destructor Dog" << std::endl;
	delete	brain;
	return ;
}

// functions
Dog&	Dog::operator=(const Dog& obj)
{
	int	i;

	std::cout << "Copy operator Dog" << std::endl;
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = obj.ideas[i];
		i++;
	}
	this->type = obj.type;
	return (*this); 
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOFF WOFF BARK BARK" << std::endl;
}
