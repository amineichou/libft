/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:46:04 by moichou           #+#    #+#             */
/*   Updated: 2023/11/18 14:44:48 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*searched;
	unsigned char	d;

	i = 0;
	searched = (unsigned char *)s;
	d = (unsigned char )c;
	while (i < n)
	{
		if (searched[i] == d)
			return (&searched[i]);
		i++;
	}
	return (0);
}
