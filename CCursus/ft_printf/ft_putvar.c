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

#include "printf.h"

void	ft_putvar(va_list var, char c, int *n)
{
	if (c == 'd')
		ft_putnbr(va_arg(var, float));
	else if (c == 's')
		ft_putstr(va_arg(var, char *));
	else if (c == 'c')
		ft_putchar(va_arg(var, char));
	else if (c == 'x')
		ft_putnbr_base(va_arg(var, char *), "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(va_arg(var, char *), "0123456789ABCDEF");
	else if (c == 'o')
		ft_putnbr_base(va_arg(var, char *), "01234567");
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(var, unsigned int *));
	else if (c == 'i')
		ft_putnbr(var);
	else if (c == 'p')
		ft_putnbr(var);
	else if (c == '%')
		ft_putchar('%');
}
