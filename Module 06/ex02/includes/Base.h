/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:38:34 by dclark            #+#    #+#             */
/*   Updated: 2022/04/27 17:03:17 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>
#include <cstdlib>
#include <time.h>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
