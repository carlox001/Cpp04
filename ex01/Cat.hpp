/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:08:35 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/20 15:15:08 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
 #define CAT_HPP
 #include "Animal.hpp"
 #include "Brain.hpp"

class Cat: public Animal, private Brain
{
	private:
		Brain	*brain;

	public:
		Cat( void );
		Cat(const Cat& copy);
		~Cat( void );

		Cat&		operator=(const Cat& obj);
		void		makeSound( void ) const;
};

#endif
