/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 20:09:10 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/21 20:24:42 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char oct)
{
	int i;
	int c;

	i = 128;
	while (i > 0)
	{
		c = i & oct;
		if (c > 0)
			write(1, "1", 1);//&c -1znak??prtined
		if (c == 0)
			write(1, "0", 1);
		i /= 2;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	int f;
	//	unsigned char w;
	f = 1;
	f  = (octet << 7) | f;
	f = (octet << 6) | f;
	f = (octet << 5) | f;
	f = (octet << 4) | f;
	f = (octet << 3) | f;
	f = (octet << 2) | f;
	f = (octet << 1) | f;
	octet = f;
	return (octet);
}

int main()
{

	print_bits(reverse_bits(1));
	return (0);
}
