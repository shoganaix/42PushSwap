#include "push_swap.h"

void	ft_check_args(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**args;	

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_isnum(args[i]))
		{
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		if (ft_contains(tmp, args, i))
		{
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		if (tmp < -2147483648 || tmp > 2147483647)
		{
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		i++;
	}
	if (argc == 2)
		ft_free(args);
}