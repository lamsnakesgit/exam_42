/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:48:32 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/18 19:16:29 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allowed functions: write
 *  Write a program called alpha_mirror that takes a string and displays this st
 *  ring
 *  after replacing each alphabetical character by the opposite alphabetical
 *  character, followed by a newline.
 */
#include <unistd.h>

int main(int ac, char **av)//progf
{
	int i;

	if (ac == 2)
	{
		i = 0;
	//	av[1][i] - 26 + 25;
	//	z - (av - a)
		while(av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] = 'Z' - (av[1][i] - 'A');
				write(1, &(av[1][i]), 1);
			}
			else if	(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] = 'z' - (av[1][i] - 'a');
				write(1, &(av[1][i]), 1);
			}
			else
				write(1, &(av[1][i]), 1);
			++i;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
