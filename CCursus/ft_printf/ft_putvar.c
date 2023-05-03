/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isporras <isporras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:22:43 by isporras          #+#    #+#             */
/*   Updated: 2023/05/02 13:22:43 by isporras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putvar(va_list var, char c, int *n)
{
	if (c == 'd' || c == 'i')
		n += ft_putnbr_pf(va_arg(var, int));
	else if (c == 's')
		n += ft_putstr_pf(va_arg(var, char *));
	else if (c == 'c')
		n += ft_putchar_pf(va_arg(var, int));
	else if (c == 'x')
		n += ft_putnbr_base(va_arg(var, int), "0123456789abcdef");
	else if (c == 'X')
		n += ft_putnbr_base(va_arg(var, int), "0123456789ABCDEF");
	else if (c == 'o')
		n += ft_putnbr_base(va_arg(var, int), "01234567");
	else if (c == 'u')
		n += ft_putunsigned_pf(va_arg(var, unsigned int));
	//else if (c == 'p')
	//	n += ft_putptrhex(va_arg(var, unsigned int));
	else if (c == '%')
		n += ft_putchar_pf('%');
}
