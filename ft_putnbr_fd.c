/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:00:35 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/11 17:26:12 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int counting(long int n)
{
	int size;

	size = 1;
	while (n >= 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

int	ft_putnbr_fd(long int n, int fd)
{
	char	c;
	int count;

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
