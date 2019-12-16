/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:14:25 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/13 17:14:37 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	pc;

	pc = (unsigned char)c;
	if (!(pc >= 'a' && pc <= 'z') && !(pc >= 'A' && pc <= 'Z') &&
			!(pc >= '0' && pc <= '9'))
	{
		return (0);
	}
	return (1);
}
