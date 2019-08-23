/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:01:59 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:02:01 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core.h"

t_wlf		*p_wlf(void *mlx, int *win_count, char *type)
{
	t_wlf	*wlf;
	
	if (!(wlf = (t_wlf *)ft_memalloc(sizeof(t_wlf))))
		return (0);
	wlf->mlx = mlx;
	wlf->win_count = win_count;
	wlf->ms.p = point2(0, 0);
	wlf->ms.l = 0;
	wlf->ms.m = 0;
	wlf->ms.r = 0;
	if ((!(win_init(wlf, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE))) ||
		(!(hook_init(wlf))) ||
		(!(draw_init(wlf, type))))
		exit(0);
	return (wlf);
}
