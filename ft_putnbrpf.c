/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrpf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:14:56 by mailinci          #+#    #+#             */
/*   Updated: 2024/03/24 21:08:18 by mailinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrpf(long n, int *c)
{
	if (n < 0)
	{
		n = n * -1;
		ft_putcharpf('-', c);
	}
	if (n < 10)
		ft_putcharpf((char)(n + 48), c);
	else
	{
		ft_putnbrpf(n / 10, c);
		ft_putnbrpf(n % 10, c);
	}
}
