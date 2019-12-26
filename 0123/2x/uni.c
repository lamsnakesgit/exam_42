/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uni.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 21:45:36 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/20 22:13:22 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// displ wout doubles the chars that appear in either one of the strings
#include <unistd.h>
int main(int argc, char **argv)
{
	char nul[256] = {0};
	int i;

	i = 0;
	if (argc == 3)
	{
		while(argv[1][i] != '\0')
		{
			if (nul[argv[1][i]] == 0)
			{
				nul[argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while(argv[2][i] != '\0')
		{
			if (nul[argv[2][i]] == 0)
			{
			  nul[argv[2][i]] = 1;
			  write(1, &argv[2][i], 1);
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return(0);
}

