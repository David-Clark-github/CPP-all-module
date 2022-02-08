/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:35:17 by dclark            #+#    #+#             */
/*   Updated: 2022/02/08 11:40:55 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string.h>

class Contact {
	char	*_prenom;
	char	*_nom;
	char	*_surnom;
	char	*_tel;
	char	*_secret;
	int		_index;
public:
	Contact(void);
	~Contact(void);
	char	*getPre(void)const;
	char	*getNom(void)const;
	char	*getSur(void)const;
	char	*getTel(void)const;
	char	*getSec(void)const;
	int		getInd(void)const;
	void	setPre(char *str);
	void	setNom(char *str);
	void	setSur(char *str);
	void	setTel(char *str);
	void	setSec(char *str);
	void	setInd(int i);

	void	SearchContact(void);

};

#endif
