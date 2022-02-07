/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:54:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/07 12:19:39 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"

Contact::Contact(void)
{
	this->_prenom = NULL;
	this->_nom = NULL;
	this->_surnom = NULL;
	this->_tel = NULL;
	this->_secret = NULL;
	return;
}

Contact::~Contact(void)
{
	if (this->_prenom != NULL)
		free(this->_prenom);
	if (this->_nom != NULL)
		free(this->_nom);
	if (this->_surnom != NULL)
		free(this->_surnom);
	if (this->_tel != NULL)
		free(this->_tel);
	if (this->_secret != NULL)
		free(this->_secret);
	return;
}

char	*Contact::getPre(void)const {
	return this->_prenom;
}

char	*Contact::getNom(void)const {
	return this->_nom;
}

char	*Contact::getSur(void)const {
	return this->_surnom;
}

char	*Contact::getTel(void)const {
	return this->_tel;
}

char	*Contact::getSec(void)const {
	return this->_secret;
}

void	Contact::setPre(char *str) {
	_prenom = strdup(str);
}

void	Contact::setNom(char *str) {
	_nom = strdup(str);
}

void	Contact::setSur(char *str) {
	_surnom = strdup(str);
}

void	Contact::setTel(char *str) {
	_tel = strdup(str);
}

void	Contact::setSec(char *str) {
	_secret = strdup(str);
}
