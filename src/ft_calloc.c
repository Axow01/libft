/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:04:40 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/04 16:17:21 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*memory;

	i = 0;
	memory = malloc(nmemb * size);
	if (!memory)
		return (0);
	ft_bzero(memory, nmemb * size);
	return (memory);
}
