/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:43:19 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/23 18:05:11 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_of_unb(unsigned long long nb, int base)
{
	int	size;

	size = 0;
	while (nb)
	{
		size++;
		nb /= base;
	}
	return (size);
}

char	*ft_ulltoa(unsigned long long n, int base)
{
	char	*result;
	int		i;

	i = ft_size_of_unb(n, base);
	if (n == 0)
		i++;
	result = ft_calloc(i + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i--)
	{
		result[i] = HEX[n % base];
		n /= base;
	}
	return (result);
}
