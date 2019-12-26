/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 20:36:39 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/18 18:59:55 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
////////////program
#include <unistd.h>
#include <stdio.h>

int			main(int argc, char **argv)
{
	int ind;
	int cou;
	int i;

	i = 0;
	ind = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			cou = 0;
			if  ((argv[1][i] >= 'a') && (argv[1][i] <= 'z') && (argv[1][i]))
			{
				ind = argv[1][i] - 'a' + 1;
//				printf("%d\n", ind);
			}
			else if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z') && (argv[1][i]))
			{
				ind = argv[1][i] - 'A' + 1;
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			while((cou < ind && argv[1][i] >= 'a' && argv[1][i] <= 'z') || (cou < ind && argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				write(1, &argv[1][i], 1);
				cou++;
//				printf("\n%d\n", cou);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
