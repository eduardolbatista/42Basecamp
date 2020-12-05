/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edde-lim <edde-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 03:52:44 by edde-lim          #+#    #+#             */
/*   Updated: 2020/12/01 16:56:29 by edde-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *scr)
{
	int counter;

	counter = 0;
	while (scr[counter] != '\0')
	{
		dest[counter] = scr[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
