/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:04:52 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/01 17:04:32 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
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
			if (str[counter] >= 48 && str[counter] <= 57)
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
