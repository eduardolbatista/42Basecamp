/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:17:27 by edde-lim          #+#    #+#             */
/*   Updated: 2020/11/26 00:15:18 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char p, char s, char t)
{
	write(1, &p, 1);
	write(1, &s, 1);
	write(1, &t, 1);
}

void	ft_print_space(char p, char s, char t)
{
	if (p == '7' && s == '8' && t == '9')
		write(1, "", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char p;
	char s;
	char t;

	p = '0';
	s = '1';
	t = '2';
	while (p < t && p < s && p <= '9')
	{
		while (s > p && s < t && s <= '9')
		{
			while (t > p && t > s && t <= '9')
			{
				ft_print(p, s, t);
				ft_print_space(p, s, t);
				t++;
			}
			s++;
			t = s + 1;
		}
		p++;
		s = p + 1;
		t = s + 1;
	}
}
