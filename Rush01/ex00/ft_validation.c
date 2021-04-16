/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:54:41 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 00:25:07 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include "rush01.h"
#endif

void	ft_validation(char **v, int *flag, int argc, char *str)
{
	if (argc != 2 || ft_strlen(str) != 31)
	{
		ft_error(flag);
	}
	if (*flag == 0)
	{
		ft_input_check(str, flag);
		ft_spacenumber(str, flag);
		ft_wp_trimmer(v, str);
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_input_check(char *str, int *flag)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) < 49 || *(str + i) > 52) && *(str + i) != 32)
		{
			ft_error(flag);
		}
		i++;
	}
}

void	ft_wp_trimmer(char **v, char *str)
{
	int		i[3];
	char	*dest;

	dest = (char *)malloc(16 * sizeof(char));
	i[0] = 0;
	i[2] = 0;
	while (*(str + i[0]) != '\0')
	{
		if (*(str + i[0]) != 32)
		{
			dest[i[2]++] = str[i[0]];
		}
		i[0]++;
	}
	i[1] = -1;
	i[2] = 0;
	while (i[1]++ < 4)
	{
		i[0] = 0;
		while (i[0] < 4)
		{
			v[i[0]++][i[1]] = *(dest + (i[2]++));
		}
	}
	free(dest);
}

void	ft_spacenumber(char *str, int *flag)
{
	int i;

	i = 0;
	while (*(str + i) != '\0' && *flag == 0)
	{
		if (i % 2 == 1 && *(str + i) != ' ')
		{
			ft_error(flag);
		}
		else if (i % 2 == 0 && *(str + i) == ' ')
		{
			ft_error(flag);
		}
		i++;
	}
}
