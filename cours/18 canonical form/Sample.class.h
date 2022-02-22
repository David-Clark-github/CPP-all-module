/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:23:49 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 14:23:51 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample {
	public:
		Sample(void);									// Canonicale
		Sample(int const n);
		Sample(Sample const & src);						// Canonicale
		~Sample(void);									// Canonicale

		Sample	&	operator=(Sample const & rhs);		// Canonicale

		int		getFoo(void)const;
	
	private:
		int	_foo;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);

#endif