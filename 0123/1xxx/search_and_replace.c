/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 15:20:06 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/17 18:24:41 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*char		ft_snr()
{

}*/
int main(int argc, char **argv) //exit, write
{
	int i;
	int n;


	n = 0;
	i = 0;
	if (argc == 4)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] != argv[2][n])
			{
				write(1, &argv[1][i], 1);
			}
			else 
			{
				write(1, &argv[3][n], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
