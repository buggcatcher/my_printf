#include "ft_printf.h"

void	ft_putcharpf(char ch, int *c)
{
	write(1, &ch, 1);
	(*c)++;
}

void	ft_puthexmempf(void *str, int *c)
{
	unsigned long	mem;

	if (str == NULL)
	{
		write(1, "(nil)", 5);
		*c = *c + 5;
	}
	else
	{
		mem = (unsigned long)str;
		ft_putstrpf("0x", c);
		ft_puthexnbrpf(mem, "0123456789abcdef", c);
	}
}

void	ft_putstrpf(char *str, int *c)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
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

void	ft_puthexnbrpf(unsigned long n, char *tab, int *c)
{
	if ((n / 16) != 0)
		ft_puthexnbrpf((n / 16), tab, c);
	ft_putcharpf(tab[n % 16], c);
}

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
