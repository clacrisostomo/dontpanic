/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 21:58:02 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 00:25:04 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

void	ft_tester4(char **m, char **v, int *flag, int *params)
{
	int		num;
	int		col;
	char	op_view;

	num = params[0];
	col = params[1];
	op_view = v[num][col == 0 ? 3 : 1];
	if (op_view == '1' && *flag == 0)
		ft_filler(m, num, col, "1234");
	else
	{
		ft_error(flag);
	}
}
