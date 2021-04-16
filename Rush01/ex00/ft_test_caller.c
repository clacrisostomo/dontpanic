/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_caller.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:51:59 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 00:24:50 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

void	ft_test_caller(char **m, char **v, int *flag, int col)
{
	int	i[2];

	i[0] = 0;
	i[1] = col;
	while (i[0] < 4 && *flag == 0)
	{
		if (v[i[0]][2] == '1' && *flag == 0 && col == 0)
			ft_tester1(m, v, flag, i);
		if (v[i[0]][2] == '2' && *flag == 0 && col == 0)
			ft_tester2(m, v, flag, i);
		if (v[i[0]][2] == '3' && *flag == 0 && col == 0)
			ft_tester3(m, v, flag, i);
		if (v[i[0]][2] == '4' && *flag == 0 && col == 0)
			ft_tester4(m, v, flag, i);
		if (v[i[0]][0] == '1' && *flag == 0 && col == 1)
			ft_tester1(m, v, flag, i);
		if (v[i[0]][0] == '2' && *flag == 0 && col == 1)
			ft_tester2(m, v, flag, i);
		if (v[i[0]][0] == '3' && *flag == 0 && col == 1)
			ft_tester3(m, v, flag, i);
		if (v[i[0]][0] == '4' && *flag == 0 && col == 1)
			ft_tester4(m, v, flag, i);
		i[0]++;
	}
}

void	ft_filler(char **m, int num, int col, char *fill)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (fill[i] != 'x')
			m[col == 1 ? num : i][col == 1 ? i : num] = fill[i];
		i++;
	}
}

int		ft_zero_counter(char **m)
{
	int i;
	int j;
	int count;

	count = 0;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (m[i][j] == '0')
				count++;
			i++;
		}
		j++;
	}
	return (count);
}
