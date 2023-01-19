/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:41:28 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/23 18:04:08 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_u(unsigned int n)
{
	char	*test;
	int		size;

	test = ft_ulltoa(n, 10);
	size = ft_putstr_fd(test, 1);
	free(test);
	return (size);
}
