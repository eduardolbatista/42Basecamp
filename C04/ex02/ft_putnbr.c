/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:58:58 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/04 22:11:05 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_num(int number)
{
	char		list[10];
	int			counter;

	counter = 0;
	while (number > 0)
	{
		list[counter] = (number % 10) + 48;
		number = (int)(number / 10);
		counter++;
	}
	counter--;
	while (counter >= 0)
	{
		write(1, &list[counter], 1);
		counter--;
	}
}

void	ft_putnbr(int nb)
{
	long int lnb;

	lnb = nb;
	if (lnb == 0)
	{
		lnb = lnb + '0';
		write(1, &lnb, 1);
	}
	else if (lnb > 0)
	{
		ft_num(lnb);
	}
	else
	{
		lnb = (lnb - lnb) - lnb;
		write(1, "-", 1);
		ft_num(lnb);
	}
}

int		main(void)
{
	int nb;
	nb = -2147483647;
	ft_num(nb);
}
