/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:09:38 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/14 11:58:10 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return(str);
}
char	*ft_strcapitalize(char *str)
{
	int	i;
	i = 0;
	char	j;
	j = 't';
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if(j == 't')
				str[i] -= 32;
			j = 'f';
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 'f';
		else
			j = 't';
		i++;
	}
	return (str);
}