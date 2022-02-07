/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:35:17 by dclark            #+#    #+#             */
/*   Updated: 2022/02/07 12:19:40 by dclark           ###   ########.fr       */
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
public:
	Contact(void);
	~Contact(void);
	char	*getPre(void)const;
	char	*getNom(void)const;
	char	*getSur(void)const;
	char	*getTel(void)const;
	char	*getSec(void)const;
	void	setPre(char *str);
	void	setNom(char *str);
	void	setSur(char *str);
	void	setTel(char *str);
	void	setSec(char *str);
};

#endif
