/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moichou <moichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:30:16 by moichou           #+#    #+#             */
/*   Updated: 2023/11/11 18:16:20 by moichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_dig(long int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*converted_number;
	int			digit_count;
	long int	number;

	number = n;
	digit_count = ft_count_dig(number);
	if (number < 0)
	{
		number *= -1;
		digit_count++;
	}
	converted_number = malloc(sizeof(char) * (digit_count + 1));
	if (!converted_number)
		return (0);
	converted_number[digit_count] = '\0';
	while (digit_count--)
	{
		converted_number[digit_count] = (number % 10) + '0';
		number /= 10;
	}
	if (n < 0)
		converted_number[0] = '-';
	return (converted_number);
}
