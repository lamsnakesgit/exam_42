/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 20:15:30 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/21 20:22:33 by ddratini         ###   ########.fr       */
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

int main()
{
	print_bits(2);
	return (0);
}
