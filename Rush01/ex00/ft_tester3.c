/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:28:57 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 00:58:20 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

void	ft_tester3(char **m, char **v, int *flag, int *params)
{
	int		num;
	int		col;
	char	op_view;

	num = params[0];
	col = params[1];
	op_view = v[num][col == 0 ? 3 : 1];
	if (op_view == '1' && *flag == 0)
		ft_tester_31(m, flag, num, col);
	else if (op_view == '2' && *flag == 0)
		ft_tester_32(m, flag, num, col);
	else
		ft_error(flag);
}

void	ft_tester_31(char **m, int *flag, int num, int col)
{
	if (m[col == 1 ? num : 3][col == 1 ? 3 : num] != '0'
	&& m[col == 1 ? num : 3][col == 1 ? 3 : num] != '4')
		ft_error(flag);
	if (m[col == 1 ? num : 0][col == 1 ? 0 : num] != '0'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '1'
	&& m[col == 1 ? num : 0][col == 1 ? 0 : num] != '2')
		ft_error(flag);
	if (*flag == 0)
	{
		if (m[col == 1 ? num : 2][col == 1 ? 2 : num] == '2'
		|| m[col == 1 ? num : 0][col == 1 ? 0 : num] == '1')
			ft_filler(m, num, col, "1324");
		else if (m[col == 1 ? num : 2][col == 1 ? 2 : num] == '3'
		|| m[col == 1 ? num : 1][col == 1 ? 1 : num] == '1')
			ft_filler(m, num, col, "2134");
		else if (m[col == 1 ? num : 2][col == 1 ? 2 : num] == '1'
		|| (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2'
		&& m[col == 1 ? num : 1][col == 1 ? 1 : num] == '3'))
			ft_filler(m, num, col, "2314");
		else if (m[col == 1 ? num : 2][col == 1 ? 2 : num] != '2'
		&& m[col == 1 ? num : 2][col == 1 ? 2 : num] != '0')
			ft_filler(m, num, col, "2xx4");
		else
			ft_filler(m, num, col, "xxx4");
	}
}

void	ft_tester_32(char **m, int *flag, int num, int col)
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
		if (m[col == 1 ? num : 3][col == 1 ? 3 : num] == '3'
		|| m[col == 1 ? num : 1][col == 1 ? 1 : num] == '2')
			ft_filler(m, num, col, "1243");
		else if (m[col == 1 ? num : 3][col == 1 ? 3 : num] == '2'
		|| (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '1'
		&& m[col == 1 ? num : 1][col == 1 ? 1 : num] == '3'))
			ft_filler(m, num, col, "1342");
		else if (m[col == 1 ? num : 3][col == 1 ? 3 : num] == '1'
		|| (m[col == 1 ? num : 0][col == 1 ? 0 : num] == '2'
		&& m[col == 1 ? num : 1][col == 1 ? 1 : num] == '3'))
			ft_filler(m, num, col, "2341");
		else if (m[col == 1 ? num : 3][col == 1 ? 3 : num] != '1'
		&& m[col == 1 ? num : 3][col == 1 ? 3 : num] != '0')
			ft_filler(m, num, col, "1x4x");
		ft_filler(m, num, col, "xx4x");
	}
}
