/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:09:01 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/01 16:09:39 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp_src;
	char	*temp_dest;

	i = n - 1;
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	else
	{
		while (i != -1lu)
		{
			temp_dest[i] = temp_src[i];
			i--;
		}
	}
	return (dest);
}
