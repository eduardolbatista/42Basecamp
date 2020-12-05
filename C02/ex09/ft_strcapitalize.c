/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:41:48 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/02 21:20:50 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int counter;
	int flag;

	counter = 0;
	flag = 1;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 48 && str[counter] <= 57) ||
			(str[counter] >= 65 && str[counter] <= 90) ||
			(str[counter] >= 97 && str[counter] <= 122))
		{
			if (flag && (str[counter] >= 97 && str[counter] <= 122))
				str[counter] = str[counter] - 32;
			else if (!flag && (str[counter] >= 65 && str[counter] <= 90))
				str[counter] = str[counter] + 32;
			flag = 0;
		}
		else
			flag = 1;
		counter++;
	}
	return (str);
}
