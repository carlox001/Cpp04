/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:09:16 by cazerini          #+#    #+#             */
/*   Updated: 2025/08/01 17:11:40 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
 # define MATERIASOURCE_HPP
 # include "IMateriaSource.hpp"
 # include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*materia[4];

	public:
		MateriaSource( void );
		MateriaSource(const MateriaSource& copy);
		~MateriaSource( void );
		
		MateriaSource&	operator=(const MateriaSource& obj);
		void			learnMateria(AMateria *m);
		AMateria*		createMateria(std::string const& type);
};

#endif
