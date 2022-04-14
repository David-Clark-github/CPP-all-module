/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:49:15 by david             #+#    #+#             */
/*   Updated: 2022/04/14 15:53:09 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <stdexcept>
 
 class Master {

	public:
	Master();
	Master(Master const & m);
	operator=(Master const & m);
	~Master();


	private:

};
