/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:31:40 by mmarcott          #+#    #+#             */
/*   Updated: 2022/11/23 18:31:41 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdint.h>

int		ft_put_u(unsigned int n);
char	*ft_ulltoa(unsigned long long n, int base);
int		ft_put_hex(unsigned int nb, char maj);
int		ft_put_p(uintptr_t nbr);

#endif
