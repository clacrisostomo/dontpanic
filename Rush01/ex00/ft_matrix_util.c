/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:15:04 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 00:24:46 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

void	*ft_matrix_alloc(char **mat)
{
	int i;
	int j;

	j = 0;
	mat = (char **)malloc(4 * sizeof(char *));
	while (j < 4)
	{
		mat[j] = (char *)malloc(4 * sizeof(char));
		j++;
	}
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			mat[i][j] = '0';
			i++;
		}
		j++;
	}
	return (mat);
}

void	ft_matrix_free(char **mat)
{
	int i;

	i = 0;
	while (i < 4)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}

void	ft_matrix_printer(char **mat)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			write(1, &mat[i][j], 1);
			if (i < 3)
				write(1, " ", 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
