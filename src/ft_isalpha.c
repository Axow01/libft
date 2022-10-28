/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:24:21 by mick              #+#    #+#             */
/*   Updated: 2022/10/27 21:13:19 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	char	chara;

	chara = (char)c;
	if ((chara >= 'A' && chara <= 'Z') || (chara >= 'a' && chara <= 'z'))
		return (1);
	return (0);
}
