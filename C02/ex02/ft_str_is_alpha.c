/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:52:20 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/01 23:57:35 by edde-lim         ###   ########.fr       */
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
