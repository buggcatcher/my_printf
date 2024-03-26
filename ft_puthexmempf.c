/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmempf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:05:38 by mailinci          #+#    #+#             */
/*   Updated: 2024/03/24 21:08:15 by mailinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexmempf(void *str, int *c)
{
	unsigned long	mem;

	if (str == NULL)
	{
		write(2, "(nil)", 6);
		*c = *c + 5;
	}
	else
	{
		mem = (unsigned long)str;
		ft_putstrpf("0x", c);
		ft_puthexnbrpf(mem, "0123456789abcdef", c);
	}
}
