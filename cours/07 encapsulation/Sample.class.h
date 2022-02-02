/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:59:27 by dclark            #+#    #+#             */
/*   Updated: 2022/02/02 10:11:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample {

public:
	int		publicFoo;

	Sample(void);
	~Sample(void);

	void	publicBar(void)const;

private:
	int		_privateFoo;

	void	_privateBar(void)const;

};

#endif
