

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

// Stack
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// Main function
int		main(int argc, char** argv);

// CheckArgs function
void	ft_check_args(int argc, char** argv);

// Stack functions
void	initStack(t_list** stack, int argc, char** argv);
void	sort_stack(t_list** stack_a, t_list** stack_b);

// List functions


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

// Utils functions
int		ft_contains(int num, char** argv, int i);
int		ft_isnum(char* num);
void	ft_free(char** str);
int		is_sorted(t_list** stack);
void	free_stack(t_list** stack);

#endif

