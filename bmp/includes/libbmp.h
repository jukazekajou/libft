/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libbmp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 16:48:49 by jdurand           #+#    #+#             */
/*   Updated: 2019/12/12 17:13:40 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBBMP_H
# define LIBBMP_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "bmp.h"
# include <stdio.h>

void			fill_headers(t_bmp *bmp, int width, int height);
int				fill_imagedata(t_bmp *bmp, char *img, int width, int height);
int				write_rgb(t_bmp *bmp);
void			write_headers(t_bmp *bmp);
int				export_as_bmp(char *path, char *img, int width, int height);
t_bmp			*init_bmp(int height);
t_bitmap_data	*new_bitmapdata_node(t_uchar b, t_uchar g,
				t_uchar r);
int				check_header(t_bmp *bmp);
t_uint			bytes_to_number(t_uchar *str, t_uint len);
void			number_to_bytes(t_uint nb, unsigned char *buffer, t_uint len);
void			destroy_bmp(t_bmp *bmp);
void			free2d(unsigned char ***str);

#endif
