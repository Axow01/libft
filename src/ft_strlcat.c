/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:29:00 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/03 17:32:26 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	dst_len;
	size_t	src_len;
	char	*temp_src;

	i = ft_strlen(dst);
	k = 0;
	temp_src = (char *)src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dst && !src)
		return (0);
	if (size == 0)
		return (src_len);
	if (size < dst_len)
		return (src_len + size);
	while (i < (size - 1) && temp_src[k])
		dst[i++] = temp_src[k++];
	dst[i] = '\0';
	return (dst_len + src_len);
}
