/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:14:50 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/01 17:36:16 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

// constructor
Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = name;
	return ;
}

Character::Character(const Character& copy)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = copy.inventory[i];
	this->name = copy.name;
	return ;
}

// destructor
Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	return ;
}

// functions
Character&	Character::operator=(const Character& obj)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
	this->name = obj.getName();
	return (*this);
}

std::string const&	Character::getName( void ) const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (this->inventory[i])
		i++;
	if (i < 4)
	{
		std::cout << m->getType() << " materia equipped!" << std::endl;
		this->inventory[i] = m;
	}
	else
	{
		std::cout << m->getType() << " materia cannot be equipped! Inventory full."
		<< std::endl;
	}
}

void	Character::unequip(int idx)
{
	int	i;

	i = 0;
	while (this->inventory[i])
		i++;
	if (idx < 0 || idx > i || idx > 4)
		std::cout << "Inexistent or empity slot!" << std::endl;
	else
	{
		std::cout << "Unequipped " << this->inventory[idx]->getType()
		<< " materia." << std::endl;
		this->inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	int	i;

	i = 0;
	while (this->inventory[i])
		i++;
	if (idx < 0 || idx > i || idx > 4)
		std::cout << "Inexistent or empity slot!" << std::endl;
	else
		this->inventory[idx]->use(target);
	
}
