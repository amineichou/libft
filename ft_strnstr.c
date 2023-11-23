/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:00:01 by moichou           #+#    #+#             */
/*   Updated: 2023/11/17 10:02:19 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	first_index;
	char	*str;

	i = 0;
	str = (char *)haystack;
	if (!haystack && !len && needle)
		return (NULL);
	if (needle[0] == '\0' || haystack == needle)
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		first_index = i;
		while (str[i] == needle[j] && needle[j] && i < len)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&str[first_index]);
		i = first_index + 1;
	}
	return (NULL);
}
