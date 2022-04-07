/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:15:05 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 18:35:39 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

void	test1() {
	try {
		//Do some stuff here
		if (/* there's an error*/) {
			throw std::exception();
		} else {
			//Do some more stuff
		}
	} catch (std::exception e) {
		//Handle the error
	}
}

void	test2() {
	//Do some stuff
	if (/**/) {
		throw std::exception();
	} else {
		//Do some more stuff
	}
}

void	test3() {
	try {
		test2();
	} catch (std::exception& e) {
		//Handle error
	}
}

void	test4() {
	class PEBKACException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Problem exeists between keyboard and chair");
			}
	};
	try {
		test3();
	} catch (PEBKACException& e) {
		//Handle the fact that the user is an idiot
	} catch (std::exception& e) {
		//Handle other execption that are like std::exception
	}
}
