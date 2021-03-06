/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:48:51 by dclark            #+#    #+#             */
/*   Updated: 2022/02/06 21:40:29 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>
#include <string.h>

class Sample {

public:
	int		foo;

	Sample(char *name);
	~Sample(void);

	void	bar(void)const;

private:
	char	*str;

};

#endif
