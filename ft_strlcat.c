/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:00:53 by moichou           #+#    #+#             */
/*   Updated: 2023/11/12 22:22:38 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!src || !dstsize)
		return (ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	if (i == dstsize)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	while (src[j])
	{
		j++;
		i++;
	}
	return (i);
}
