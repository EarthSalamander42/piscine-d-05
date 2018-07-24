/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:01:34 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/10 19:01:38 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (to_find[0] == '\0')
		return (str);
	while (str[0] != '\0')
	{
		i = 0;
		while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
		i++;
	}
	return ((void*)0);
}
