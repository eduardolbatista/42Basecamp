/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:10:23 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/02 20:09:51 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
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
			if (str[counter] >= 97 && str[counter] <= 122)
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
