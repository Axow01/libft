/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:29:00 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/03 20:36:42 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while ((src[index]) && ((index + i + 1) < dstsize))
	{
		dst[i + index] = src[index];
		index++;
	}
	if (i != dstsize)
		dst[i + index] = '\0';
	return (i + ft_strlen(src));
}
