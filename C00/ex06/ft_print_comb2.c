/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:59:32 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/04 20:13:09 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_space(char n1, char n2, char n3, char n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
	{
	}
	else
		write(1, ", ", 2);
}

void	ft_count_last_numbers(char n1, char n2, char n3, char n4)
{
	while (n3 <= '9')
	{
		while (n4 <= '9')
		{
			ft_print_space(n1, n2, n3, n4);
			n4++;
		}
		n3++;
		n4 = '0';
	}
}

void	ft_print_comb2(void)
{
	char n1;
	char n2;
	char n3;
	char n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '1';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			ft_count_last_numbers(n1, n2, n3, n4);
			n2++;
			n3 = n1;
			n4 = n2 + 1;
		}
		n1++;
		n2 = '0';
		n3 = n1;
		n4 = n2 + 1;
	}
}
