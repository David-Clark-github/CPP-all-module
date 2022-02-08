/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:03:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/08 12:12:26 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.h"

# define 	EXIT	1
# define 	ADD		2
# define	SEARCH	3

class PhoneBook {
	
	int		_RepLen;
	int		_Exit;

public:	

	Contact	Repertoir[8];
	
	char	command[1024];
	
	PhoneBook(void);
	~PhoneBook(void);
	
	void	setExit(int e);
	int		getExit(void)const;
	void	displayContacts(Contact Repertoir[8]);
	void	displayInd(int index);
	void	displayPre(char *prenom);
	void	displayNom(char *nom);

};

#endif
