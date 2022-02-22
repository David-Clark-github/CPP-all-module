/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:38:22 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 13:38:25 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
    public:
    	Sample(void);
    	~Sample(void);
    	void	bar(char const c)const;
		void	bar(int const i)const;
		void	bar(float const f)const;
		void	bar(Sample const &S)const;
};

#endif
