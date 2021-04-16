/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:17:58 by csantos-          #+#    #+#             */
/*   Updated: 2020/12/03 15:45:07 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}
	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x] && x < (n - 1))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}