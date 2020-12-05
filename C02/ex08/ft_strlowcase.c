/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:37:41 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/02 00:10:30 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[counter] != '\0')
		{
			if ((str[counter] >= 65 && str[counter] <= 90) ||
				(str[counter] >= 97 && str[counter] <= 122))
			{
				counter++;
			}
			else
			{
				return (0);
			}
		}
	}
	return (1);
}

int		ft_str_is_uppercase(char *str)
{
	int counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[counter] != '\0')
		{
			if (str[counter] >= 65 && str[counter] <= 90)
			{
				counter++;
			}
			else
			{
				return (0);
			}
		}
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int		counter;
	char	aux[2];

	counter = 0;
	while (str[counter] != '\0')
	{
		aux[0] = str[counter];
		aux[1] = '\0';
		if (ft_str_is_alpha(aux) && ft_str_is_uppercase(aux))
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}
