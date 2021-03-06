/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.class.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:20:04 by dclark            #+#    #+#             */
/*   Updated: 2022/03/23 11:03:06 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_CLASS_H
# define UTILS_CLASS_H

# include <iostream>
# include <string>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>


# define	ipre	0
# define	inom	1
# define	isur	2
# define	itel	3
# define	isec	4

# define 	EXIT	1
# define 	ADD		2
# define	SEARCH	3

class Utils {

public:

	Utils(void);
	~Utils(void);
	int		check_cmd(std::string str)const;
	bool	check_tel(std::string tel)const;
	bool	check_index(std::string index, int RepLen);
	bool	strIsAlpha(const std::string str);

};

#endif
