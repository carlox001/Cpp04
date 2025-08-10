/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:34:17 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/20 16:22:51 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// constructors
WrongCat::WrongCat( void ): WrongAnimal()
{
	std::cout << "Default constructor WrongCat" << std::endl;
	this->setType("WrongCat");
	return ;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
	std::cout << "Copy constructor WrongCat" << std::endl;
	this->setType(copy.type);
	return ;
}

// destructor
WrongCat::~WrongCat( void )
{
	std::cout << "Default destructor WrongCat" << std::endl;
	return ;
}

// functions
WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.type;
	return (*this); 
}
