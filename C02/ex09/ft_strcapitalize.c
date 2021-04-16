/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:49:18 by csantos-          #+#    #+#             */
/*   Updated: 2020/12/01 22:43:31 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lower_to_upper(char *c, char *prev_c)
{
	if ((*prev_c >= 32 && *prev_c <= 47)
	|| (*prev_c >= 58 && *prev_c <= 64)
	|| (*prev_c >= 91 && *prev_c <= 96)
	|| (*prev_c >= 123 && *prev_c <= 127))
	{
		*c = *c - 32;
	}
}

void	upper_to_lower(char *c, char *prev_c)
{
	if ((*prev_c >= 'a' && *prev_c <= 'z')
	|| (*prev_c >= 'A' && *prev_c <= 'Z')
	|| (*prev_c >= '0' && *prev_c <= '9'))
	{
		*c = *c + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			lower_to_upper(&str[i], &str[i - 1]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			upper_to_lower(&str[i], &str[i - 1]);
		i++;
	}
	return (str);
}
