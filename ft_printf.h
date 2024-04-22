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
