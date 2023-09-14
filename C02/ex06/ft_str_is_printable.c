/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:59:43 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/14 11:55:50 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] <= 32  && str[i] >= 127 )
			i++;
		else
			return (0);
	}
	return (1);
}
