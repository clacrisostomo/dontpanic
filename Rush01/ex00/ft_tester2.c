/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:28:57 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 01:55:04 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

void	ft_tester2(char **m, char **v, int *flag, int *params)
{
	int		num;
	int		col;
	char	op_view;

	num = params[0];
	col = params[1];
	op_view = v[num][col == 0 ? 3 : 1];
	if (op_view == '1' && *flag == 0)
		ft_tester_21(m, flag, num, col);
	else if (op_view == '2' && *flag == 0)
	{
		ft_tester_22(m, flag, num, col);
		ft_tester_22_part2(m, flag, num, col);
	}
	else if (op_view == '3' && *flag == 0)
		ft_tester_23(m, flag, num, col);
	else
		ft_error(flag);
}

void	ft_tester_21(char **m, int *flag, int num, int col)
{
	if (m[col == 1 ? num : 0][col == 1 ? 0 : num] != '0'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '3')
		ft_error(flag);
	if (m[col == 1 ? num : 3][col == 1 ? 3 : num] != '0'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] != '4')
		ft_error(flag);
	if (*flag == 0)
	{
		if (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1'
		|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '2')
			ft_filler(m, num, col, "3124");
		else if (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '2'
		|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1')
			ft_filler(m, num, col, "3214");
		else
			ft_filler(m, num, col, "3xx4");
	}
}

void	ft_tester_22(char **m, int *flag, int num, int col)
{
	if ((m[col == 1 ? num : 0][col == 1 ? 0 : num] == '4'
	|| m[col == 1 ? num : 3][col == 1 ? 3 : num] == '4') && *flag == 0)
		ft_error(flag);
	if ((m[col == 1 ? num : 1][col == 1 ? 1 : num] == '3'
	&& m[col == 1 ? num : 2][col == 1 ? 2 : num] == '3') && *flag == 0)
		ft_error(flag);
	if ((m[col == 1 ? num : 0][col == 1 ? 0 : num] == '1'
	|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '2') && *flag == 0)
		ft_filler(m, num, col, "1423");
	else if (((m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2'
	&& m[col == 1 ? num : 1][col == 1 ? 1 : num] == '4')
	|| (m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '3')
	|| (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2'
	&& m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1')) && *flag == 0)
		ft_filler(m, num, col, "2413");
	else if (((m[col == 1 ? num : 0][col == 1 ? 0 : num] == '3'
	&& m[col == 1 ? num : 1][col == 1 ? 1 : num] == '4')
	|| (m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2')
	|| (m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] == '3')
	|| (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '4'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2')) && *flag == 0)
		ft_filler(m, num, col, "3412");
}

void	ft_tester_22_part2(char **m, int *flag, int num, int col)
{
	if (((m[col == 1 ? num : 2][col == 1 ? 2 : num] == '4'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '3')
	|| (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2'
	&& m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1')
	|| (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '3')
	|| (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2'
	&& m[col == 1 ? num : 2][col == 1 ? 2 : num] == '4')) && *flag == 0)
		ft_filler(m, num, col, "2143");
	else if (((m[col == 1 ? num : 0][col == 1 ? 0 : num] == '3'
	&& m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1')
	|| (m[col == 1 ? num : 2][col == 1 ? 2 : num] == '4'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2')
	|| (m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2')) && *flag == 0)
		ft_filler(m, num, col, "3142");
	else if ((m[col == 1 ? num : 3][col == 1 ? 3 : num] == '1'
	|| m[col == 1 ? num : 1][col == 1 ? 1 : num] == '2') && *flag == 0)
		ft_filler(m, num, col, "3241");
	else if (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2' && *flag == 0)
		ft_filler(m, num, col, "xxx3");
	else if (m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2' && *flag == 0)
		ft_filler(m, num, col, "3xxx");
}

void	ft_tester_23(char **m, int *flag, int num, int col)
{
	if (m[col == 1 ? num : 2][col == 1 ? 2 : num] != '0'
	&& m[col == 1 ? num : 2][col == 1 ? 2 : num] != '4')
		ft_error(flag);
	if (m[col == 1 ? num : 0][col == 1 ? 0 : num] != '0'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '1'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '2')
		ft_error(flag);
	if (*flag == 0)
	{
		if (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '3'
		|| m[col == 1 ? num : 2][col == 1 ? 2 : num] == '2')
			ft_filler(m, num, col, "3421");
		else if (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2'
		|| (m[col == 1 ? num : 3][col == 1 ? 3 : num] == '1'
		&& m[col == 1 ? num : 2][col == 1 ? 2 : num] == '3'))
			ft_filler(m, num, col, "2431");
		else if (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '1'
		|| m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2')
			ft_filler(m, num, col, "1432");
		else if (m[col == 1 ? num : 0][col == 1 ? 0 : num] != '1'
		&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '0')
			ft_filler(m, num, col, "x4x1");
		ft_filler(m, num, col, "x4xx");
	}
}
