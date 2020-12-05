/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:41:04 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/04 18:45:38 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_aff_p(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0' && str[counter] != 'p')
	{
		if (str[counter] == 'p')
		{
			write(1, "p", 1);
			write(1, "\n", 1);
		}
		else
		{
			counter++;
		}
	}
	write(1, "p", 1);
	write(1, "\n", 1);
}

int		main(void)
{
	char *str;
	str = "eduardo";
	ft_aff_p(str);
}
