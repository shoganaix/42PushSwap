/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:09:24 by msoriano          #+#    #+#             */
/*   Updated: 2023/11/09 22:17:29 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// rra and rrb | Intercambia entre si todos los elementos de un stack.
//El ultimo elemento pasa aser el primero

int	reverserotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (reverserotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (reverserotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	reverserotate(stack_a);
	reverserotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
