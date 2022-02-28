/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:21:27 by david             #+#    #+#             */
/*   Updated: 2022/02/28 10:25:49 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Cat {
	public:
		Cat();
		Cat(const Cat &);
		Cat &operator=(const Cat &)
		~Cat();

		void	run(int distance);
		void	scornSomeone(const std::string & target);

	private:
		int		_numberOfLegs;
};


class Pony {
	public:
		Pony();
		Pony(const Pony &);
		Pony &operator=(const Pony &)
		~Pony();

		void	run(int distance);
		void	doMagic(const std::string & target);

	private:
		int		_numberOfLegs;
};
