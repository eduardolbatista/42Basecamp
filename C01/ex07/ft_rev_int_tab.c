/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:25:56 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/01 02:45:46 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int s;
	int temp;

	counter = 0;
	s = size;
	while (counter < size && s > counter)
	{
		temp = tab[counter];
		tab[counter] = tab[s];
		tab[s] = temp;
		counter++;
		s--;
	}
}
