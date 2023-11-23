/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:03:23 by moichou           #+#    #+#             */
/*   Updated: 2023/11/12 14:07:11 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*res;
	size_t	i;

	str = (char *)s;
	if (!s)
		return (0);
	if (ft_strlen(str) < start)
		return (ft_strdup(""));
	if (ft_strlen(&str[start]) < len)
		res = malloc(sizeof(char) * ft_strlen(&str[start]) + 1);
	else
		res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	i = 0;
	while (s[start] && i < len)
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}
