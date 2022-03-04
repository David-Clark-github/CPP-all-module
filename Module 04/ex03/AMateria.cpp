/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:52:29 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 16:54:27 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class AMateria
{
	protected:
		[...]
	public:
		AMateria(std::string const & type);
		[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
