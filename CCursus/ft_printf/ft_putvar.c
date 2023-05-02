#include "printf.h"

void	ft_putvar(va_list var, char c, int *n)
{
	if (c == 'd')
		ft_putnbr(var);
	else if (c == 's')
		ft_putstr(var);
	else if (c == 'c')
		ft_putchar(var);
	else if (c == 'x')
		ft_putnbr_base(var, "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(var, "0123456789ABCDEF");
	else if (c == 'o')
		ft_putnbr_base(var, "01234567");
	else if (c == 'u')
		ft_putnbr_unsigned(var);
	else if (c == 'U')
		ft_putnbr_unsignedlong(var);
	else if (c == 'f')
		ft_putnbr_float(var);
	else if (c == 'lf')
		ft_putnbr_double(var);
	else if (c == '%')
		ft_putchar('%');
}