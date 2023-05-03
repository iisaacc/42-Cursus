/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isporras <isporras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:20:59 by isporras          #+#    #+#             */
/*   Updated: 2023/05/02 13:20:59 by isporras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	var;
	int		n; // Nº de carácteres imprimidos (return)

	if (!str)
		return (0);
	n = 0;
	va_start(var, str);// Inicialización de lista de variables
	while (*str)
	{
		if (*str == '%')
		{
			ft_putvar(var, *(str + 1), &n); // Función que redirecciona a la función que corresponda según tipo
			str++;
		}
		else
			n += ft_putchar_pf(*str);
		str++;
	}
	va_end(var);
	return (n);
}
