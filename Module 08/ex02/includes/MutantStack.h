/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:56:11 by dclark            #+#    #+#             */
/*   Updated: 2022/04/25 14:10:07 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <string>

template<typename T>
class MutantStack {
	public:
		MutantStack();
		MutantStack(MutantStack & m);
		MutantStack &operator=(MutantStack & m);
		~MutantStack();

		//Accessor
	private:
		

};
