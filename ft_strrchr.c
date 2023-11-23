/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:28:55 by moichou           #+#    #+#             */
/*   Updated: 2023/11/17 10:09:16 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		slen;
	char	*last;
	char	*source;

	i = 0;
	source = (char *)s;
	last = 0;
	slen = ft_strlen(s);
	while (i <= slen)
	{
		if (source[i] == (char)c)
			last = &source[i];
		i++;
	}
	return (last);
}
