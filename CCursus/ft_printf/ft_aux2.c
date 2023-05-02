/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isporras <isporras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:22:23 by isporras          #+#    #+#             */
/*   Updated: 2023/05/02 17:13:22 by isporras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_unsigned_pf(int arg)
{
	int				n;
	char			c;
	unsigned int	num;

	n = countn(arg);
	num = n;
	if (num > 9)
		ft_putnbr_pf(num / 10);
	c = '0' + num % 10;
	write(1, &c, 1);
	return (n);
}

