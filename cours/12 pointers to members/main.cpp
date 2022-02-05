/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:33:46 by dclark            #+#    #+#             */
/*   Updated: 2022/02/05 19:10:21 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"

int main(void)
{
	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;

	p = &Sample::foo;
}
