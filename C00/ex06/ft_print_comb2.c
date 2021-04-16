/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:59:09 by csantos-          #+#    #+#             */
/*   Updated: 2020/11/28 15:08:06 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int i)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = -1;
	while (first < 98)
	{
		first++;
		second = first;
		while (second < 99)
		{
			second++;
			ft_print_number(first);
			ft_putchar(' ');
			ft_print_number(second);
			if (first != 98 && second != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
