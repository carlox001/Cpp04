/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:20:14 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/01 17:19:27 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// constructor
MateriaSource::MateriaSource( void )
{
	int	i;

	i = 0;
	while (i < 4)
	{
		this->materia[i] = NULL; 
		i++;
	}
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	int	i;
	
	i = 0;
	while (i < 4 && copy.materia[i])
	{
		this->materia[i] = copy.materia[i]->clone();
		i++;
	}
	return ;
}

// destructor
MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
	return ;
}

// functions
MateriaSource&	MateriaSource::operator=(const MateriaSource& obj)
{
	int	i;
	
	i = 0;
	while (i < 4 && obj.materia[i])
	{
		this->materia[i] = obj.materia[i]->clone();
		i++;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	i = 0;
	while (materia[i])
		i++;
	if (i > 4)
		std::cout << "No more space to learn a new materia!" << std::endl;
	else
	{
		std::cout << m->getType() << " materia learned!" << std::endl;
		materia[i] = m;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int			i;
	int			flag;
	AMateria*	obj;

	flag = 0;
	i = 0;
	while (materia[i])
	{
		if (materia[i]->getType() == type)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
	{
		std::cout << type << " does not exist!" << std::endl;
		return (0);
	}
	std::cout << type << " materia created!" << std::endl;
	if (type == "cure")
	{
		obj = new Cure();
		return (obj);
	}
	obj = new Ice();
	return (obj);
}
