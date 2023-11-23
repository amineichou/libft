/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:57:59 by moichou           #+#    #+#             */
/*   Updated: 2023/11/17 10:16:59 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		beginning;
	int		end;

	if (!s1 || !set)
		return (NULL);
	beginning = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (ft_strchr(set, s1[beginning]) && beginning <= end)
		beginning++;
	if (beginning > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	result = malloc(sizeof(char) * (end - beginning + 2));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[beginning], end - beginning + 2);
	return (result);
}
