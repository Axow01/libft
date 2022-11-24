/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:03:29 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/11 19:39:57 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkintlength(long int n)
{
	int	i;

	if (n < 0)
		n *= -1;
	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	checkzero(long int n, char *str)
{
	if (!str)
		return ;
	if (n == 0)
		str[0] = '0';
}

char	*ft_itoa(int n)
{
	int			length;
	char		*number;
	int			i;
	long int	nb;

	nb = n;
	length = checkintlength(nb);
	if (nb < 0)
	{
		nb *= -1;
		length++;
	}
	number = (char *)malloc(length + 1);
	if (!number)
		return (NULL);
	i = length - 1;
	number[length] = 0;
	number[0] = '-';
	checkzero(n, number);
	while (nb != 0)
	{
		number[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (number);
}
