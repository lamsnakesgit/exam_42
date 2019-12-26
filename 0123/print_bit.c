/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 17:50:42 by ddratini          #+#    #+#             */
/*   Updated: 2019/05/17 19:15:59 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void print_bit(unsigned char octet)
{
	int i;
	int buf;

	i = 128;
	while (i != 0)
	{
		buf = octet & i;
		i /= 2;
		if (buf > 0)
		{
			write(1, "1", 1);
		}
		else if (buf == 0)
		{
			write(1, "0", 1);
		}
	}
}
//func
int main()
{
//	char a;
	int a;

	a = 255;
	a = 10;
	print_bit(a);
	return (0);
}

