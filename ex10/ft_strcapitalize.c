/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:18:24 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/24 23:53:41 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_is_special(char c)
{
	if ((c == 32 || c == 43 || c == 45))
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90 && str[i] != '\0')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_is_lower_letter(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (ft_is_lower_letter(str[0]) == 1)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (ft_is_special(str[i]) == 1 && ft_is_lower_letter(str[i + 1]) == 1)
			str[i + 1] = str[i + 1] - 32;
		ft_putchar(str[i]);
		i++;
	}
	return (str);
}
