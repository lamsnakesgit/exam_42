/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:05:35 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/20 22:40:45 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//2strs d
//isp wout doubles the chars thatnpp in 2 strs. in the ord they appear in 1 one
#include <unistd.h>
int main(int argc, char **argv)
{
	char nol[256] = {0};
	int i;

	i = 0;

	if (argc == 3)
	{
		while (argv[2][i])
		{
			nol[argv[2][i]] = 1;
			i++;
		}
		i = 0;
		while(argv[1][i])
		{
			if (nol[argv[1][i]] == 1)
			{
				write(1, &argv[1][i], 1);
				nol[argv[1][i]] = 0;
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}
