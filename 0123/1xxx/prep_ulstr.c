/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_ulstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:07:41 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/18 17:24:00 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putcharend(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] -= 32;
				write(1, av[1] + i, 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
				write(1, &(av[1][i]), 1);
			}
			else
				write(1, &(av[1][i]), 1);
			++i;
		}
		write(1, "\n", 1);
	//	ft_putcharend(av[1][i]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
