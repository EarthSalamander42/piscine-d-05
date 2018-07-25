/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:40:20 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/24 23:33:16 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (!*str || str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= 97 || str[i] >= 122)
			return (0);
		i++;
	}
	return (1);
}
