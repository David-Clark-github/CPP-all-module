/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:04:12 by dclark            #+#    #+#             */
/*   Updated: 2022/02/21 13:04:13 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <string>

class Karen {
	public:
		Karen();
		~Karen();
		void	complain(std::string level);

	private:
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
};

#endif