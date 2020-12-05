/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:04:04 by edde-lim          #+#    #+#             */
/*   Updated: 2020/11/26 19:35:26 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_num(int number)
{
	char	list[10];
	int		counter;

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
	if (nb == 0)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
	else if (nb > 0)
	{
		ft_num(nb);
	}
	else
	{
		nb = (nb - nb) - nb;
		write(1, "-", 1);
		ft_num(nb);
	}
}
