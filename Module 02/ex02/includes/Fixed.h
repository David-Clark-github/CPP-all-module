/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:16 by dclark            #+#    #+#             */
/*   Updated: 2022/05/02 22:54:33 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &f);
		~Fixed(void);
		Fixed &operator=(const Fixed &f);
		
		//Comparaison
		bool	operator>(const Fixed &f)const;
		bool	operator<(const Fixed &f)const;
		bool	operator>=(const Fixed &f)const;
		bool	operator<=(const Fixed &f)const;
		bool	operator==(const Fixed &f)const;
		bool	operator!=(const Fixed &f)const;

		//Arithmétique
		Fixed	operator+(const Fixed &f)const;
		Fixed	operator-(const Fixed &f)const;
		Fixed	operator*(const Fixed &f)const;
		Fixed	operator/(const Fixed &f)const;

		//Operator incre / decre
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		//Min / Max function
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

		int		getRawBits(void)const;
		void	setRawBits(const int raw);
		float	toFloat(void)const;
		int		toInt(void)const;
	private:
		int					_value;
		static const int	_binary = 8; // Il y a 8 bit de "fraction"
	
};

std::ostream &operator<<(std::ostream & o, Fixed const & f);

#endif
