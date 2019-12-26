/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_search_and_replace.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:33:15 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/18 18:46:40 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)//progrma
{
	int i;

	if (ac == 4)
	{
		i = 0;
	/*	while (av[1][i] && av[2][0] != av[1][i])//av[2][0] 3!!
		{
		//	if (av[1][i] == av[3][0])
		//		write(1, &(av[2][0]));
			write(1, &(av[1][i], 1));
			++i;
		}
		if (av[1][i] && av[2][0] == av[1][i])
		{
			write();
		}*/
		if (!(av[2][1]) || !(av[3][1]))
		{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
		//		break;
				write(1, &(av[3][0]), 1);
			else
				write(1, &(av[1][i]), 1);
			++i;
		}
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
