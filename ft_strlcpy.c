/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:14:24 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/11 20:12:37 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*temp_src;
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	temp_src = (char *)src;
	if (size == 0)
		return (ft_strlen(temp_src));
	while (temp_src[i] != '\0' && i < size - 1)
	{
		dst[i] = temp_src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(temp_src));
}
