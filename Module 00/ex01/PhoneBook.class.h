/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:03:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/09 13:28:25 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.h"
# include "Utils.class.h"

class PhoneBook {
	
	int		_RepLen;
	int		_Exit;

public:	

	Contact	Repertoir[8];

	std::string	command;
	std::string	tmp;
	
	PhoneBook(void);
	~PhoneBook(void);
	
	void	setExit(int e);
	int		getExit(void)const;
	void	setRepLen(int r);
	int		getRepLen(void)const;
	void	displayContacts(Contact Repertoir[8]);
	void	displayInd(int index);
	void	displayString(std::string str);
	void	addContact(Contact Repertoir[8], int RepLen);

};

#endif
