/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:34:46 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/11 19:36:07 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Check if the array start with + or
//	- or a digit. Check until there is no more digits.

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		n;

	if (!nptr)
		return (0);
	i = 0;
	sign = 1;
	n = 0;
	while ((char)nptr[i] && ft_strchr(WHITE_SPACE, (int)nptr[i]))
		i++;
	if ((char)nptr[i] == '-' || (char)nptr[i] == '+')
	{
		if ((char)nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (((char)nptr[i]) && ((char)nptr[i] >= '0') && ((char)nptr[i] <= '9'))
		n = n * 10 + (char)nptr[i++] - '0';
	return (n * sign);
}
