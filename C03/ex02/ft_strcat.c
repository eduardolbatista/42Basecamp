/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:54:00 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/04 14:04:32 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		counter1;
	int		counter2;
	char	temp;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1] != '\0')
	{
		counter1++;
	}
	while (src[counter2] != '\0')
	{
		temp = src[counter2];
		dest[counter1] = temp;
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (dest);
}
