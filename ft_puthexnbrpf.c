/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbrpf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:30:07 by mailinci          #+#    #+#             */
/*   Updated: 2024/03/24 21:08:17 by mailinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexnbrpf(unsigned long n, char *tab, int *c)
{
	if ((n / 16) != 0)
		ft_puthexnbrpf((n / 16), tab, c);
	ft_putcharpf(tab[n % 16], c);
}
