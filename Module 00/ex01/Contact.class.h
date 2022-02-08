/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:35:17 by dclark            #+#    #+#             */
/*   Updated: 2022/02/08 13:02:05 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>

#define	ipre	0
#define	inom	1
#define	isur	2
#define	itel	3
#define	isec	4

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
