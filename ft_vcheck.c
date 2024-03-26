/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:14:35 by mailinci          #+#    #+#             */
/*   Updated: 2024/03/24 21:08:21 by mailinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_vcheck(const char v, va_list ptr, int *c)
{
	if (v == 'c')
		ft_putcharpf((char)(va_arg(ptr, int)), c);
	if (v == 's')
		ft_putstrpf((va_arg(ptr, char *)), c);
	if (v == 'd' || v == 'i')
		ft_putnbrpf(va_arg(ptr, int), c);
	if (v == 'u')
		ft_putnbrpf((unsigned int)va_arg(ptr, int), c);
	if (v == 'x')
		ft_puthexnbrpf((unsigned int)va_arg(ptr, int), "0123456789abcdef", c);
	if (v == 'X')
		ft_puthexnbrpf((unsigned int)va_arg(ptr, int), "0123456789ABCDEF", c);
	if (v == 'p')
		ft_puthexmempf(va_arg(ptr, void *), c);
	if (v == '%')
		ft_putcharpf('%', c);
}
