/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:15:32 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/24 14:15:32 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counting(long int nb)
{
	int	size;

	size = 1;
	if (nb < 0)
	{
		size++;
		nb *= -1;
	}
	while (nb > 9)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

int	ft_putnbr_fd(long int n, int fd)
{
	int		count;
	char	c;

	count = counting(n);
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n %= 10;
	}
	c = n + 48;
	write(fd, &c, 1);
	return (count);
}
