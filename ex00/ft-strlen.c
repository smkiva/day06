/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smkiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:25:54 by smkiva            #+#    #+#             */
/*   Updated: 2020/06/25 11:55:15 by smkiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
		return(i);
	}
}
