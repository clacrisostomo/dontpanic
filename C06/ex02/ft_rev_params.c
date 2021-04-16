/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:24:02 by csantos-          #+#    #+#             */
/*   Updated: 2020/12/04 20:38:43 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *name);

int		main(int argc, char **argv)
{
	int counter;

	counter = argc - 1;
	while (counter > 0)
	{
		ft_putstr(argv[counter]);
		counter--;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int counter1;

	counter1 = 0;
	while (str[counter1] != '\0')
	{
		write(1, &str[counter1], 1);
		counter1++;
	}
	write(1, "\n", 1);
}
