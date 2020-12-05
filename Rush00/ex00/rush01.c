/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:55:19 by adiego-d          #+#    #+#             */
/*   Updated: 2020/11/22 18:07:00 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	int c;
	int l;

	c = 1;
	l = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l > 1 && l == y && c > 1 && c == x))
				ft_putchar('/');
			else if ((l == y && c == 1) || (l == 1 && c == x))
				ft_putchar('\\');
			else if (c == 1 || l == y || c == x || l == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			if (c == x)
				ft_putchar('\n');
			c++;
		}
		c = 1;
		l++;
	}
}
