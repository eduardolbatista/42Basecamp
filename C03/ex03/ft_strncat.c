/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:07:06 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/04 16:59:37 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int		counter1;
	unsigned int		counter2;
	char				temp;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1] != '\0')
	{
		counter1++;
	}
	while ((counter2 < n) && src[counter2] != '\0')
	{
		temp = src[counter2];
		dest[counter1] = temp;
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (dest);
}
