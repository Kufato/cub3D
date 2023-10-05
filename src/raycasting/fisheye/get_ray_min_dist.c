/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ray_min_dist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <arforgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:20:33 by arforgea          #+#    #+#             */
/*   Updated: 2023/08/20 18:59:55 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

float	get_ray_min_dist(t_ray ray)
{
	float	min;

	if (ray.dist_x < ray.dist_y)
		min = ray.dist_x;
	else
		min = ray.dist_y;
	min /= sqrt(ray.ray_dir_x * ray.ray_dir_x + ray.ray_dir_y * ray.ray_dir_y);
	return (min);
}
