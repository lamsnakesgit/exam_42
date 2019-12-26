/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 21:09:32 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/19 22:04:55 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;
	int k;
	int q;
	int mins;
	int out;

	out = 0;
	mins = 0;
	k = 1;
	q = 26;
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				k = argv[1][i] - 'a';
				out = q - k + '0';
				ft_putchar(out);
			}		
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				k = argv[1][i] - 'A';
				out = q - k + '0';
				ft_putchar(out);
			}
			i++;	
		
		}	

	
	}
	write(1, "\n", 1);
	return(0);
}
