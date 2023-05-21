/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isporras <isporras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:02:11 by isporras          #+#    #+#             */
/*   Updated: 2023/05/21 13:02:11 by isporras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_argvtoint(int argc, char *argv)
{
	char	**split;
	int		*stack;
	int		i;

	stack = ft_calloc(sizeof(int), (argc - 1));
	split = ft_split(argv, ' ');
	i = 0;
	while (i < argc - 1)
	{
		stack[i] = ft_atoi(split[i]);
		i++;
	}
	return (stack);
}

int	main(int argc, char *argv)
{
	int	*stack_a;
	int	*stack_b;
	int	i;

	printf("argc: %d\n", argc);
	stack_a = ft_argvtoint(argc, argv);
	i = 0;
	while (stack_a && i < argc - 1)
	{
		printf("%d\n", stack_a[i]);
		i++;
	}
	return (0);
}