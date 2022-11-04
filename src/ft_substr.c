/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:54:10 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/04 17:42:52 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// Get the substring after start character of the lenght of len.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substring;

	i = 0;
	j = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substring = malloc((int)len + 1);
	if (!substring || !s)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			substring[j++] = s[i];
		i++;
	}
	substring[j] = '\0';
	return (substring);
}
