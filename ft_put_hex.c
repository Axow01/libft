/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:15:47 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/23 18:16:18 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_hex(unsigned int nb, char maj)
{
	int		size;
	char	*tmp;

	tmp = ft_ulltoa(nb, 16);
	size = ft_strlen(tmp) + 1;
	if (maj == 'X')
		while (size--)
			tmp[size] = ft_toupper(tmp[size]);
	size = ft_putstr_fd(tmp, STDOUT_FILENO);
	free(tmp);
	return (size);
}
