/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 01:14:08 by ddratini          #+#    #+#             */
/*   Updated: 2019/05/29 21:57:24 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//prgrm, .c .h atoi, printf, write
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int r;

	r = 0;
	if (argc == 4)
	{
		if (*argv[2] == '*')
		{
			r = atoi(argv[1]) * atoi(argv[3]);
		}
		else if (*argv[2] == '/')
		{
			r = atoi(argv[1]) / atoi(argv[3]);
		}
		else if (*argv[2] == '%')
		{
			 r = atoi(argv[1]) % atoi(argv[3]);
		}
		else if (*argv[2] == '+')
		{		
			r = atoi(argv[1]) + atoi(argv[3]);
		}
		else if (*argv[2] == '-')
		{
			r = atoi(argv[1]) - atoi(argv[3]);
		}
		printf("%d\n", r);
	}
//	printf("%d", r);
////	write(1, "\n", 1);
	return(0);
}
