
#include "printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	var;
	int		n; // Nº de carácteres imprimidos (return)

	n = 0;
	va_start(var, str);// Inicialización de lista de variables
	while (*str)
	{
		if (*str == '%')
			ft_putvar(var, *(str + 1), &n); // Función que redirecciona a la función que corresponda según tipo
		else (*str != '%')
		{
			ft_putchar(*str);
			str++;
			n++;
		}
	}
	va_end(var);
	return (n);
}
//hola
