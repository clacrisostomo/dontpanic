/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 01:01:29 by gnuncio-          #+#    #+#             */
/*   Updated: 2020/11/22 22:48:08 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** lin = line counter
** col = column counter
*/

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int col;
	int lin;

	lin = 0;
	while (lin++ < y)
	{
		col = 0;
		while (col++ < x)
		{
			if (lin == 1 && col == 1)
				ft_putchar('/');
			else if ((lin == 1 && col == x) || (lin == y && col == 1))
				ft_putchar('\\');
			else if (lin == y && col == x)
				ft_putchar('/');
			else if ((lin == 1 && col > 1 && col < x) || (lin > 1 && col == 1))
				ft_putchar('*');
			else if ((lin > 1 && col == x) || (lin == y && col > 1 && col < x))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
