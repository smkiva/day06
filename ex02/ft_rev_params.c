/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smkiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:30:20 by smkiva            #+#    #+#             */
/*   Updated: 2020/06/25 16:34:36 by smkiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char  *argv[])
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		ft_putchar('\n');
		++j;
	}
	return (0);
}
