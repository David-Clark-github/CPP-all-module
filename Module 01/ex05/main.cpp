/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:10:59 by dclark            #+#    #+#             */
/*   Updated: 2022/03/23 15:10:42 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include <iostream>
#include <string>

int main(void) {
    Harl H;
	
	H.complain("toto");
    H.complain(DEBUG);
    H.complain(INFO);
    H.complain(WARNING);
    H.complain(ERROR);
}
