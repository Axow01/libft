/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:00:38 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/11 17:26:54 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedstr;
	size_t	i;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	while (end > start && ft_strchr((char *)set, s1[end - 1]))
		end--;
	trimmedstr = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!trimmedstr)
		return (NULL);
	while (start < end)
		trimmedstr[i++] = s1[start++];
	trimmedstr[i] = 0;
	return (trimmedstr);
}
