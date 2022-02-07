/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:03:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/07 14:54:49 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.h"

class PhoneBook {
	
	int		_RepLen;
	int		_exit;

public:	

	Contact	Repertoir[9];
	
	int		getExit(void)const;
	char	command[1024];
	
	PhoneBook(void);
	~PhoneBook(void);
	
	void	setExit(int e);

};

#endif
