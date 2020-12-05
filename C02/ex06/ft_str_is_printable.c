/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:15:16 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/01 17:08:14 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
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
			if (str[counter] >= 32 && str[counter] <= 126)
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
