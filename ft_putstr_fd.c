/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:58:17 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/11 20:06:01 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	return (ft_strlen(s));
}
