/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mailinci <mailinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:35:08 by mailinci          #+#    #+#             */
/*   Updated: 2024/03/27 18:16:13 by mailinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_vcheck(str[i + 1], ptr, &c);
			i++;
		}
		else
			ft_putcharpf(str[i], &c);
		i++;
	}
	va_end(ptr);
	return (c);
}

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
/*
int main(void)
{
	// char c = 'c';
	// char *str = "lorem ipsum";
	// int n = 777;
	// int *b = &n;
	// unsigned long ind = 2147483647;
	// int orig_func;
	// int my_func;
	char *y = NULL;
	int *x = NULL;
	int *p = 0;

	printf("Jesus %s Christ \n", y);
	ft_printf("Jesus %s Christ \n", y);
	printf("%p %p \n", p, p);
	ft_printf("%p %p \n", p, p);
	printf("%p\n", x);
	ft_printf("%p\n", x);
	printf("%s\n", y);
	ft_printf("%s\n", y);
	ft_printf("ho %d anni\n", n);
	printf("ho %d anni\n", n);
	orig_func = printf("%c\n", c);
	my_func = ft_printf("%c\n", c);
	printf("orig = %d\nmyft = %d\n", orig_func, my_func);
	orig_func = printf("%i\n", n);
	my_func = ft_printf("%i\n", n);
	printf("orig = %d\nmyft = %d\n", orig_func, my_func);
	orig_func = printf("%s\n", str);
	my_func = ft_printf("%s\n", str);
	printf("orig = %d\nmyft = %d\n", orig_func, my_func);
	orig_func = printf("%lx\n", ind);
	my_func = ft_printf("%x\n", ind);
	printf("orig = %d\nmyft = %d\n", orig_func, my_func);
	printf("orig = %d\nmyft = %d\n", orig_func, my_func);
	orig_func = printf("%p\n", b);
	my_func = ft_printf("%p\n", b);
	printf("orig = %d\nmyft = %d\n", orig_func, my_func);
	orig_func = printf("%lX\n", ind);
	my_func = ft_printf("%X\n", ind);
	printf("orig = %d\nmyft = %d\n", orig_func, my_func);
	printf("%%\n");
	ft_printf("%%\n");
	return (0); 
} */
