/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:42:34 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/04 05:24:34 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_space(char n1, char n2)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	if (n1 == '8' && n2 == '9')
		write(1, "", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_sequence(char n1, char n2)
{
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			ft_print_space(n1, n2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}

void	ft_print_combn(int n)
{
	char n1;
	char n2;

	n1 = '0';
	n2 = '1';
	if (n == 2)
	{
		ft_print_sequence(n1, n2);
	}
	else
		write(1, "Error!", 6);
}
