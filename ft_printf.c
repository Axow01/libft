/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:44:51 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/23 18:33:48 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	output_type(va_list list, char c)
{
	char	*s;

	if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(list, int), STDOUT_FILENO));
	else if (c == 's')
	{
		s = va_arg(list, char *);
		if (!s)
			return (ft_putstr_fd("(null)", STDOUT_FILENO));
		return (ft_putstr_fd(s, STDOUT_FILENO));
	}
	else if (c == 'x')
		return (ft_put_hex(va_arg(list, int), 'x'));
	else if (c == 'X')
		return (ft_put_hex(va_arg(list, int), 'X'));
	else if (c == 'c')
		return (ft_putchar_fd((char)va_arg(list, int), STDOUT_FILENO));
	else if (c == '%')
		return (ft_putchar_fd('%', STDOUT_FILENO));
	else if (c == 'u')
		return (ft_put_u(va_arg(list, int)));
	else if (c == 'p')
		return (ft_put_p(va_arg(list, uintptr_t)));
	return (0);
}

int	ft_printf(char *string, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] != '%')
		{
			ft_putchar_fd(string[i], 1);
			total++;
		}
		else
		{
			if (string[++i] == 0)
				continue ;
			total += output_type(args, string[i]);
		}
		i++;
	}
	va_end(args);
	return (total);
}
