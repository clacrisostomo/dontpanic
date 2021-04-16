/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:28:57 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 01:12:19 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

void	ft_tester1(char **m, char **v, int *flag, int *params)
{
	int		num;
	int		col;
	char	op_view;

	num = params[0];
	col = params[1];
	op_view = v[num][col == 0 ? 3 : 1];
	if (op_view == '4' && *flag == 0)
		ft_tester_14(m, flag, num, col);
	else if (op_view == '3' && *flag == 0)
		ft_tester_13(m, flag, num, col);
	else if (op_view == '2' && *flag == 0)
		ft_tester_12(m, flag, num, col);
	else
		ft_error(flag);
}

void	ft_tester_12(char **m, int *flag, int num, int col)
{
	if (m[col == 1 ? num : 0][col == 1 ? 0 : num] != '0'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '4')
		ft_error(flag);
	if (m[col == 1 ? num : 3][col == 1 ? 3 : num] != '0'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] != '3')
		ft_error(flag);
	if (*flag == 0)
	{
		if (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1'
		|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '2')
			ft_filler(m, num, col, "4123");
		else if (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '2'
		|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1')
			ft_filler(m, num, col, "4213");
		else
			ft_filler(m, num, col, "4xx3");
	}
}

void	ft_tester_13(char **m, int *flag, int num, int col)
{
	if (m[col == 1 ? num : 0][col == 1 ? 0 : num] != '0'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '4')
		ft_error(flag);
	if (m[col == 1 ? num : 3][col == 1 ? 3 : num] != '0'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] != '1'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] != '2')
		ft_error(flag);
	if (*flag == 0)
	{
		if ((m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1'
		|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '3')
		&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2')
			ft_filler(m, num, col, "4132");
		else if (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '2'
		|| m[col == 1 ? num : 3][col == 1 ? 3 : num] == '1')
			ft_filler(m, num, col, "4231");
		else if (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '3'
		|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1')
			ft_filler(m, num, col, "4312");
		else
			ft_filler(m, num, col, "4xxx");
	}
}

void	ft_tester_14(char **m, int *flag, int num, int col)
{
	int i;

	i = 0;
	while (i < 4 && *flag == 0)
	{
		if (m[col == 1 ? num : i][col == 1 ? i : num] != '0'
		&& m[col == 1 ? num : i][col == 1 ? i : num] != '4' - i)
			ft_error(flag);
		i++;
	}
	ft_filler(m, num, col, "4321");
}
