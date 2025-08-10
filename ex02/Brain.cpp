/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 10:05:15 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/10 12:10:31 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// constructors
Brain::Brain( void )
{
	return ;
}

Brain::Brain(const Brain& copy)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	return ;
}

// destructor
Brain::~Brain( void )
{
	return ;
}

// functions
Brain&	Brain::operator=(const Brain& obj)
{
	return (*this);
}
