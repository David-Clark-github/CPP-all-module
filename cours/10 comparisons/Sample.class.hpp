/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:47:46 by dclark            #+#    #+#             */
/*   Updated: 2022/02/02 15:43:14 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample {

public:

	Sample(int v);
	~Sample(void);

	int		getFoo(void)const;
	int		compare(Sample *other)const;

private:
	
	int		_foo;
};

#endif
