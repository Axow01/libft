/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:29:00 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/01 17:40:15 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*temp_src;

	i = ft_strlen(dst) - 1;
	temp_src = (char *)src;
	if (size == 0)
		return (ft_strlen(dst) + ft_strlen(temp_src));
	while (i <= size - 1)
	{
		dst[i] = temp_src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(temp_src));
}
