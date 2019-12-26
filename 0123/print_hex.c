/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 01:14:53 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/21 02:06:41 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// takes a positiv or zero. disp lowercaseletrs
#include <unistd.h>
void ft_putchar (char c)
{
	write(1, &c, 1);
}
int print_hex(int g, int a, char *hex)	
{
	while(g > 0)
	{
		a = g % 16;
		g /= 16;
		print_hex(g, a, hex);
	//	g += '0';
//		write(1, &a, 1);
		ft_putchar(a);
	}
		
		
	return(0);
}
int main (int argc, char **argv)
{
	    char hex[] = "0123456789abcdef";
	    int g;
		int a;

		a = 0;
		g = 17;
		
		print_hex(g, a, hex);
	    return(0);
}
