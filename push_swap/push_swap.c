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

int	*ft_argvtoint(int argc, char **argv)
{
	int		*stack;
	int		i;

	stack = ft_calloc((argc - 1),sizeof(int));
	i = 0;
	while (i < argc - 1)
	{
		stack[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	stack[i] = NULL;
	return (stack);
}

int	ft_arraytolist(int *stack)
{
	int		i;
	t_stack	**list;

	list = ft_lstnew(stack[0]);
	i = 1;
	while (stack[i])
	{
		ft_lstadd_back(list, stack[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	i;
	i = 0;
	if (ft_checkerror(argc, argv) == 1)
		write(1, "Error\n", 6);
	else
	{
		stack_a = ft_argvtoint(argc, argv);
	}
	return (0);
}