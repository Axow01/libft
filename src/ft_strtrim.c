/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:00:38 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/08 12:50:37 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// Remove character sets in s1. And then return the new string without the character sets.

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedStr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	trimmedStr = malloc();
}
