/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:26:12 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/04 14:03:59 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	int				aux;

	counter = 0;
	aux = 0;
	while ((counter < n) && (s1[counter] != '\0' || s2[counter] != '\0'))
	{
		if (s1[counter] != s2[counter])
		{
			aux = s1[counter] - s2[counter];
			return (aux);
		}
		counter++;
	}
	return (aux);
}
