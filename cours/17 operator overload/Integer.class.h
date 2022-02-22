/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:50:35 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 14:12:16 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

#include <iostream>

class Integer {
    public:
        Integer(int const n);
        ~Integer(void);

        int getValue(void)const;

        Integer &   operator=(Integer const & rhs);
        Integer     operator+(Integer const & rhs)const;

    private:
        int _n;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);   

#endif
