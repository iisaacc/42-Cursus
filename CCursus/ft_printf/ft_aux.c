/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isporras <isporras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:13:40 by isporras          #+#    #+#             */
/*   Updated: 2023/05/02 18:36:14 by isporras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int arg)
{
	int				n;
	char			c;
	unsigned int	num;

	n = 0;
	if (arg < 0)
	{
		write(1, "-", 1);
		arg *= -1;
	}
	num = arg;
	if (num > 9)
		ft_putnbr_pf(num / 10);
	n++;
	c = '0' + num % 10;
	write(1, &c, 1);
	return (n);
}

int	ft_putunsigned_pf (unsigned int arg)
{
	int		n;
	char	c;

	n = 0;
	if (arg > 9)
		ft_putunsigned_pf(arg / 10);
	n++;
	c = '0' + arg % 10;
	write(1, &c, 1);
	return (n);
}

int	ft_putstr_pf(char *s)
{
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putchar_pf (char arg)
{
	write(1, &arg, 1);
	return (1);
}

//int main ()
//{
//	ft_putnbr_pf(988);
//}
