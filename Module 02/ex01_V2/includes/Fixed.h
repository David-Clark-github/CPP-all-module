/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:16 by dclark            #+#    #+#             */
/*   Updated: 2022/05/01 15:18:12 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &f);
		~Fixed(void);
		Fixed &operator=(const Fixed &f);
		Fixed &operator<<(const Fixed &f);

		int		getRawBits(void)const;
		void	setRawBits(const int raw);
		float	toFloat(void)const;
		int		toInt(void)const;
	private:
		int					_value;
		static const int	_binary = 8; // Il y a 8 bit de "fraction"
	
};

#endif
