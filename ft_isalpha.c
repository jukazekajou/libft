/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:15:10 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/13 17:15:15 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char pc;

	pc = (unsigned char)c;
	if (!(pc >= 'a' && pc <= 'z') &&
			!(pc >= 'A' && pc <= 'Z'))
	{
		return (0);
	}
	return (1);
}
