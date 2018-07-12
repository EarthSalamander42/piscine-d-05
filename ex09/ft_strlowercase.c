/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:12:33 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/11 11:12:35 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90 && str[i])
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (*str);
}
