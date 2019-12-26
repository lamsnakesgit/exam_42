/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 13:51:20 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/17 14:51:17 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if  ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
			{
				argv[1][i] += 13;
				write(1, &argv[1][i], 1);
			}
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			}
			else
				write (1, &argv[1][i], 1);
			i++;

		}
	}
	write(1, "\n", 1);
	return (0);
}
