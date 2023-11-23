/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:14:47 by moichou           #+#    #+#             */
/*   Updated: 2023/11/11 18:25:03 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*searched;
	unsigned char	d;

	i = 0;
	searched = (char *)s;
	d = (unsigned char)c;
	while (searched[i])
	{
		if (searched[i] == d)
			return (&searched[i]);
		i++;
	}
	if (d == '\0')
		return (searched + ft_strlen(searched));
	return (NULL);
}
