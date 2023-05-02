/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isporras <isporras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:36:31 by isporras          #+#    #+#             */
/*   Updated: 2023/05/02 15:38:51 by isporras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	test_base(char *str)
{
	int	x;
	int	y;

	if (str[0] == '\0' || ft_strlen(str) == 1)
		return (1);
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '+' || str[x] == '-' || str[x] < 33)
			return (1);
		y = x + 1;
		while (str[y] != '\0')
		{
			if (str[x] == str[y])
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

void	ft_recurs(unsigned int div, unsigned int nbr, char *base, int *count)
{
	if (nbr < div)
		ft_putchar(base[nbr]);
	if (nbr >= div)
	{
		*count += 1;
		ft_recurs(div, nbr / div, base, count);
		ft_putchar(base[nbr % div]);
	}
}

int	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	div;
	unsigned int	n;
	int				count;

	count = 0;
	if (test_base(base) == 0)
	{
		if (nbr < 0)
		{
			n = -nbr;
			ft_putchar('-');
			count++;
		}
		else
			n = nbr;
		div = ft_strlen(base);
		ft_recurs(div, n, base, &count);
	}
	return (count);
}
