/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:57:52 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 02:13:34 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

int		main(int argc, char **argv)
{
	int		flag;
	char	**m;
	char	**v;
	char	***ptr;

	flag = 0;
	ptr = &m;
	m = ft_matrix_alloc(*ptr);
	ptr = &v;
	v = ft_matrix_alloc(*ptr);
	ft_validation(v, &flag, argc, argv[1]);
	if (flag == 0)
		ft_solver(m, v, &flag);
	if (flag == 0)
		ft_matrix_printer(m);
	ft_matrix_free(m);
	ft_matrix_free(v);
	return (0);
}

void	ft_error(int *flag)
{
	*flag = 1;
	write(1, "Error\n", 6);
}

void	ft_solver(char **m, char **v, int *flag)
{
	int i;
	int j;
	int col;

	j = 0;
	col = 1;
	while (j < 4 && *flag == 0)
	{
		i = 0;
		while (i < 4 && *flag == 0)
		{
			if (v[i][j] + v[i][j + 1] - 48 > '5')
			{
				ft_error(flag);
				break ;
			}
			i++;
		}
		j += 2;
	}
	if (*flag == 0)
	{
		ft_test_runner(m, v, flag, col);
	}
}

void	ft_test_runner(char **m, char **v, int *flag, int col)
{
	int stop;
	int previous;
	int current;

	stop = 0;
	current = ft_zero_counter(m);
	while (stop == 0 && *flag == 0)
	{
		ft_test_caller(m, v, flag, col);
		ft_test_caller(m, v, flag, 0);
		previous = current;
		current = ft_zero_counter(m);
		if (current == 0 || previous == current)
		{
			stop = 1;
		}
	}
}
