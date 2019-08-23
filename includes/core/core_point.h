/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_point.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:53:34 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:57:13 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_POINT_H
# define CORE_POINT_H
# include "libft.h"

typedef struct		s_point3
{
	double			x;
	double			y;
	double			z;
}					t_point3;

typedef struct		s_point2
{
	int				x;
	int				y;
}					t_point2;

typedef struct		s_point2d
{
	double			x;
	double			y;
}					t_point2d;

t_point3			*p_point3(double x, double y, double z);
t_point3			point3(double x, double y, double z);
t_point2			*p_point2(int x, int y);
t_point2			point2(int x, int y);
t_point2d			point2d(double x, double y);

#endif
