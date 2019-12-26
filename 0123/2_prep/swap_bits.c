/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 21:59:54 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/25 22:06:28 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

unsigned char		swap_bits(unsigned char octet)
{
	print_bits((octet <<4 )|(octet >> 4));
	return ((octet >> 4) | (octet << 4));
}

int main()
{
	int n = 5;
	print_bits(n);
	write(1, "\n", 1);
	swap_bits(n);
//	print_bits(n);
	return (0);
}
