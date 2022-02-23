/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:10:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 17:50:34 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &f);
		~Fixed(void);
		Fixed &operator=(const Fixed &f);
		int		getRawBits(void)const;
		void	setRawBits(const int raw);
	private:
		static const int	_width = 8;
		int					_binary; //Combien de bit est a fraction ? 0 = [00000000] \===/ 2 = [000000.00]
	
};

#endif
