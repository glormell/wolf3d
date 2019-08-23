/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_frc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:54:08 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:54:09 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_WLF_H
# define T_WLF_H
# include "mlx.h"
# include "core/t_canvas.h"
# include "core/t_mouse.h"

typedef struct		s_wlf
{
    void			*mlx;
    void			*win;
    int				*win_count;
    t_mouse			ms;
    t_canvas		*cvs;
}					t_wlf;

#endif
