/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:42:03 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/14 11:58:23 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
			i++;
	return (i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int x;
	x = ft_strlen(src);
	i = 0;
	if(size != 0)
	{
		while(src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	return (x);
}	