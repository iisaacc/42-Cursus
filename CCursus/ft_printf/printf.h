#ifndef PRINTF_H
# define PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	ft_putvar(va_list var, char c, int *n);
int		ft_putnbr_pf(int arg);
int		ft_putunsigned_pf (unsigned int arg);
int		ft_putstr_pf(char *s);
int		ft_putchar_pf (char arg);
int		ft_putnbr_base(int nbr, char *base);
int		ft_putnbr_unsigned_pf(int arg);
int		test_base(char *str);
void	ft_recurs(unsigned int div, unsigned int nbr, char *base, int *count);
int		ft_putnbr_base(int nbr, char *base);

#endif
