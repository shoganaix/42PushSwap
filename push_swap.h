/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:06:44 by msoriano          #+#    #+#             */
/*   Updated: 2023/11/13 22:36:05 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include<stdlib.h>
// Stack
typedef struct s_list
{
	int				index;
	int				value;
	struct s_list	*next;
}				t_list;
// Main function
int		main(int argc, char **argv);

// CheckArgs function
void	ft_check_args(int argc, char **argv);
void	ft_check_argsn(int i, char **args);
//void	validate_args(char **args);

// Stack functions
void	initstack(t_list **stack, int argc, char **argv);
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	index_stack(t_list **stack);

// List functions
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_front(t_list **stack, t_list *new);
void	ft_lstadd_back(t_list **stack, t_list *new);
void	printList(t_list *head);
int		ft_lstsize(t_list *head);

// Instructions functions
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);

int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

int		reverseRotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

// Utils and Utilstwo functions
int		ft_contains(int num, char **argv, int i);
int		ft_isnum(char *num);
void	ft_free(char **str);
int		is_sorted(t_list **stack);
void	free_stack(t_list **stack);
void	ft_error(char *msg);
int		get_distance(t_list **stack, int index);
void	make_top(t_list **stack, int distance);
int		get_min(t_list **stack, int val);
t_list	*get_next_min(t_list **stack);
void	printstack(t_list **stack);

//Sorting 6 or less
void	sort_5(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);

//Radix
void	radix_sort(t_list **stack_a, t_list **stack_b);

#endif
