/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smkiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:14:53 by smkiva            #+#    #+#             */
/*   Updated: 2020/06/25 16:06:12 by smkiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(int argc, char const *argv[])
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			++i;
		}
		ft_putchar('\n');
	}
	return (0);
}
