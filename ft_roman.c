/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roman.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:24:21 by mmarcott          #+#    #+#             */
/*   Updated: 2023/04/29 16:40:53 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_toupper_str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((char)s[i] >= 'a' && s[i] <= 'z')
			s[i++] -= 32;
	}
	return (s);
}

int	check_letters(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] < 'a' && s[i] > 'z')
		{
			if (s[i] < 'A' && s[i] > 'Z')
				return (0);
		}
		i++;
	}
	return (1);
}

void	operations(char *s, int i, int *calcul)
{
	if (s[i] == 'I' && (s[i + 1] != 'V' && s[i + 1] != 'X'))
		*calcul += 1;
	else if (s[i] == 'I' && !(s[i + 1] != 'V' && s[i + 1] != 'X'))
		*calcul -= 1;
	else if (s[i] == 'V')
		*calcul += 5;
	else if (s[i] == 'X' && (s[i + 1] != 'L' && s[i + 1] != 'C'))
		*calcul += 10;
	else if (s[i] == 'X' && !(s[i + 1] != 'L' && s[i + 1] != 'C'))
		*calcul -= 10;
	else if (s[i] == 'L')
		*calcul += 50;
	else if (s[i] == 'C' && (s[i + 1] != 'D' && s[i + 1] != 'M'))
		*calcul += 100;
	else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
		*calcul -= 100;
	else if (s[i] == 'D')
		*calcul += 500;
	else if (s[i] == 'M')
		*calcul += 1000;
}

int	calculate_letters(char *s)
{
	int	calcul;
	int	i;

	calcul = 0;
	i = 0;
	while (s[i])
	{
		operations(s, i, &calcul);
		i++;
	}
	return (calcul);
}

int	ft_roman_to_int(char *s)
{
	int	total;

	total = 0;
	if (!check_letters(s))
		return (0);
	return (calculate_letters(ft_toupper_str(s)));
}
