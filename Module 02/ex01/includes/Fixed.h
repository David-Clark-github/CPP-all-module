/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:16 by dclark            #+#    #+#             */
/*   Updated: 2022/04/26 17:48:17 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>
#include <climits>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &f);
		~Fixed(void);
		Fixed &operator=(const Fixed &f);
		Fixed &operator<<(const Fixed &f);
		int		getRawBits(void)const;
		void	setRawBits(const int raw);
		void	setFract(void);
		void	setFract2(float value);
		float	getFract(void)const;
		int		toInt(void)const;
		float	toFloat(void)const;
		void	setTabBit(void);
		long long	getValLong(void)const;
		void	setValLong(long long val);
	private:
		int					_value;
		static const int	_binary = 8;	
		float				_fixed_point_val;
		float				_fraction_part;
		int					_tabBit[32];
};

#endif
