/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 19:48:47 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/19 21:08:27 by ddratini         ###   ########.fr       */
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
			i++;
		}
		i--;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i--;
		}
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
		{
//			write(1, &argv[1][i], 1);
			i--;
		}
		i++;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}			
	write(1, "\n", 1);
	return (0);
}
