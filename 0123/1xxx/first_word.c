/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 19:11:21 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/17 20:07:36 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] == '\t' || argv[1][i] == ' ') && argv[1][i] != '\0')
			i++;
		while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
