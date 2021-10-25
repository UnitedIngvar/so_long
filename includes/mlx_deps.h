/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_deps.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:03:24 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/10/25 21:43:17 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_DEPS_H
# define MLX_DEPS_H

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
}				t_mlx;

typedef struct s_image
{
	void	*img;
	char	*adr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_image;

#endif
