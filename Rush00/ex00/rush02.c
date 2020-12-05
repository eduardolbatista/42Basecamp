/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiego-d <adiego-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:55:19 by adiego-d          #+#    #+#             */
/*   Updated: 2020/11/22 15:28:47 by adiego-d         ###   ########.fr       */
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
			if (l == 1 && (c == 1 || c == x))
				ft_putchar('A');
			else if ((c == 1 || c == x) && l == y)
				ft_putchar('C');
			else if ((c >= 1 && (l == 1 || l == y)) || (c == 1 || c == x))
				ft_putchar('B');
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
