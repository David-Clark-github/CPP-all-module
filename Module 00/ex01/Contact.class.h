/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:35:17 by dclark            #+#    #+#             */
/*   Updated: 2022/02/09 13:28:46 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include "Utils.class.h"

class Contact {

	std::string	tab[5];
	int			_index;

public:

	Contact(void);
	~Contact(void);
	
	void		setTab(std::string str, int i);
	std::string	getTab(int i)const;
	void		setInd(int i);
	int			getInd(void)const;

	void		SearchContact(void);

};

#endif
