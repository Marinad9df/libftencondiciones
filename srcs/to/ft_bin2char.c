/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin2char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:44:38 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_bin2char(const char *bin)
{
	unsigned char	c;
	int				k;

	if (!bin)
		return ('\0');
	c = 0;
	k = 0;
	while (k < 8)
	{
		c <<= 1;
		if (bin[k] == '1')
			c |= 1;
		k++;
	}
	return ((char)c);
}
