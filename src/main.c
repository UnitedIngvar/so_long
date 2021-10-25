/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:24:10 by hcrakeha          #+#    #+#             */
/*   Updated: 2021/10/25 21:51:45 by hcrakeha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_deps.h"
#include "mlx.h"

int	main(void)
{
	t_mlx	mlx;
	t_image	img;

	mlx.mlx = mlx_init();
	mlx.mlx = mlx_new_window(mlx.mlx, 1920, 1080, "SOOOO_LONG");
	img.img = mlx_new_image(mlx.mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, \
		&img.line_length, &img.endian);
	mlx_loop(mlx.mlx);
}
