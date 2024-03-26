/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrpf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:52:08 by mailinci          #+#    #+#             */
/*   Updated: 2024/03/24 21:08:19 by mailinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrpf(char *str, int *c)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(2, "(null)", 7);
		*c = *c + 6;
	}
	else
	{
		while (str[i] != '\0')
		{
			ft_putcharpf(str[i], c);
			i++;
		}
	}
}
