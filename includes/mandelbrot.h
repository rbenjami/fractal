/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 10:53:23 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/25 17:15:55 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANDELBROT_H
# define MANDELBROT_H
# include "object.h"

# define MANDELBROT	t_mandelbrot

typedef struct		s_mandelbrot
{
	OBJECT			*object;
	VERT			vertex;
	float			min_x;
	float			max_x;
	float			min_y;
	float			max_y;
	float			rc;
	float			ic;
	float			rz;
	float			iz;
	float			zoom;

	BOOL			changed;
}					t_mandelbrot;

MANDELBROT	*new_mandelbrot(float min_x, float max_x, float min_y, float max_y);
MANDELBROT	*new_julia(float min_x, float max_x, float min_y, float max_y);

#endif
