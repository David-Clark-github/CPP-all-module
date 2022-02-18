/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:27:58 by dclark            #+#    #+#             */
/*   Updated: 2022/02/18 14:28:33 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WAEPON_H
# define WAEPON_H

class Weapon {
    public:
        Weapon(void);
        ~Weapon(void);
        std::string getType(void)const;
        void        setType(std::string type);
    private:
        std::string _type;
};

#endif