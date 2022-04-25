/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:56:11 by dclark            #+#    #+#             */
/*   Updated: 2022/04/25 15:24:22 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <vector>

template<typename T, Container = std::vector<T>>
class MutantStack : public std::stack<T, Container> {
	public:
		//Accessor
		std::vector<T>::iterator begin(void) {
			return _myVec.begin();
		}

		std::vector<T>::iterator end(void) {
			return _myVec.end();
		}

	private:
		std::vector<T>	_myVec;

};
