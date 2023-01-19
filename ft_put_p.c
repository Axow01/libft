/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:23:35 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/23 18:28:04 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_p(uintptr_t p)
{
	char	*tmp;
	int		size;

	size = ft_putstr_fd("0x", STDOUT_FILENO);
	tmp = ft_ulltoa((unsigned long)p, 16);
	size += ft_putstr_fd(tmp, STDOUT_FILENO);
	if (tmp)
		free(tmp);
	return (size);
}
