/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:59:34 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/18 13:02:56 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int b;
	char bb = '1';
	b = (int)bb;
	printf("String lenght: %d\n", ft_strlen("1234"));
	printf("Is b is alpha: %d\n", ft_isalpha(b));
	printf("Is 9 digit: %d\n", ft_isdigit((int)'9'));
	printf("Is 9 alphanum: %d Is b alphanum: %d\n", ft_isalnum((char)'9'), ft_isalnum((char)'b'));
	
	return (0);
}
