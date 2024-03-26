/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:57:34 by mailinci          #+#    #+#             */
/*   Updated: 2024/03/24 21:08:12 by mailinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putcharpf(char ch, int *c);
void	ft_puthexmempf(void *str, int *c);
void	ft_puthexnbrpf(unsigned long n, char *tab, int *c);
void	ft_putnbrpf(long n, int *c);
void	ft_putstrpf(char *str, int *c);
void	ft_vcheck(const char v, va_list ptr, int *c);

#endif