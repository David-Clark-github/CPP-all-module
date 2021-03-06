/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:34:50 by dclark            #+#    #+#             */
/*   Updated: 2022/04/27 13:15:58 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data {
	int	val;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
