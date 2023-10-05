/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:33:04 by axcallet          #+#    #+#             */
/*   Updated: 2023/08/24 18:36:21 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_STRUCT_H
# define CUB3D_STRUCT_H

/***************  INCLUDES  ****************/

# include "cub3d.h"

/***************  STRUCTURES  ****************/

typedef struct s_mlx_data
{
	mlx_t		*mlx;
	mlx_image_t	*img;
}				t_mlx_data;

typedef struct s_map
{
	char	**format_map;
	char	*texture_north;
	char	*texture_south;
	char	*texture_west;
	char	*texture_east;
	int		ceiling_color;
	int		floor_color;
	int		size_x;
	int		size_y;
}				t_map;

typedef struct s_player
{
	float	pos_x;
	float	pos_y;
	float	dir_x;
	float	dir_y;
	float	plane_x;
	float	plane_y;
	float	plane_ratio;
	float	view;
	float	theta;
}				t_player;

typedef struct s_parameter
{
	int		crossshair_size;
	int		crossshair_color;
	float	sensitivity;
	float	speed;
	float	fov;
}				t_parameter;

typedef struct s_ray
{
	float	pl;
	float	ray_dir_x;
	float	ray_dir_y;
	float	delta_x;
	float	delta_y;
	float	dist_x;
	float	dist_y;
	int		step_x;
	int		step_y;
	int		ray_pos_x;
	int		ray_pos_y;
	int		wall_color;
	int		side;
	int		ray_id;
	int		wall_side;
}			t_ray;

typedef struct s_texture
{
	int	*pixels;
	int	size_x;
	int	size_y;
}				t_texture;

typedef struct s_sprite
{
	int			type;
	int			state;
	float		x;
	float		y;
	float		z;
	t_texture	*texture;
}				t_sprite;

typedef struct s_wall_line
{
	t_texture	*texture;
	float		line_dist;
	int			wall_height;
	int			start;
	int			end;
	t_ray		*ray;
}				t_wall_line;

typedef struct s_key
{
	int	w;
	int	a;
	int	s;
	int	d;
	int	left;
	int	right;
	int	esc;
}				t_key;

typedef struct s_main
{
	t_mlx_data	mlx_data;
	t_map		map;
	t_parameter	parameter;
	t_key		key;
	t_player	player;
	t_ray		*ray_array;
	t_texture	**wall_texture;
	float		frame_curent_time;
	float		frame_old_time;
}				t_main;

#endif
