/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:56:11 by dclark            #+#    #+#             */
/*   Updated: 2022/04/26 12:32:45 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <stack>
#include <vector>

template<typename T,typename Container = std::vector<T>>
class MutantStack : public std::stack<T, Container> {
		using std::stack<T, Container>::c;
	public:
		//Accessor
		Container::iterator begin () {
			return _myVec.begin();
		}
	
		Container::iterator end () {
			return _myVec.end();
		}
	
		Container::iterator begin () const {
			return _myVec.begin();
		}
	
		Container::iterator end () const {
			return _myVec.end();
		}
	
	private:
		Container _myVec;

};
