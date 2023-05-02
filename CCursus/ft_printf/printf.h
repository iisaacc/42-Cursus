#ifndef PRINTF_H
# define PRINTF_H
# include <libft.h>
# include <stdarg.h>

struct	s_types
{
	long			i;
	char			c;
	void			*p;
	float			d;
	unsigned long	u;
	char			*x;
	char			*X;
};

int		ft_printf(char const *str, ...);
void	ft_putvar(va_list var, char c, int *n);

#endif
