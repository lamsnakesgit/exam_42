/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 13:37:01 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/19 18:57:00 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//af:---;
//0100 0001
//1000 0010
#include <stdio.h>
#include <unistd.h>
//void print_bit(unsigned char octet();
///void print_bit(unsigned char octet);
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

unsigned char reverse_bit(unsigned char octet)
{
	int i;
	int j;
	unsigned char f;
	int k;
	
	k = 9;
	i = 0;
	j = 7;
	f = 0;

	while (i <= 7 && j >= 0)
	{
	f = f | (((octet >> i) & 1) << j);
	i++;
	j--;
//	printf("f = %0x04u\n", f);
//	printf("f = %d \n", f);
//	write(1, &f, 1);
	}
//	while(k--)
////		printf("%ii", f & (1 << k));
//	
//	print_bit(f);
	return(f);
}	
int main()
{
	unsigned char a;

	a = '&';
//	write(1, &a, 1);
//	write(1, "\n", 1);
	a = reverse_bit(a);
//	write(1, &a, 1);
//	reverse_bit(a);
//
	write(1, &a, 1);
//   print_bit(a);

	return (0);
}
