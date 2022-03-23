/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:04:12 by dclark            #+#    #+#             */
/*   Updated: 2022/03/23 15:13:51 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

#define DEBUG	"0"
#define INFO	"1"
#define WARNING	"2"
#define ERROR	"3"

class Harl {
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
};

#endif
