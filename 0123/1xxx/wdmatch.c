/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 17:57:28 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/16 18:39:07 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int strlen(char *str);
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int main(int argc, char **argv)
{
	int j;
	int k;

	k = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[1][k])
			while (argv[1][k] != argv[2][j] && argv[2][j] != '\0')
				j++;
			write(1, &argv[1][k], 1);
			k++;
	}
	write(1, "\n", 1);
}
