/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 22:09:58 by ddratini          #+#    #+#             */
/*   Updated: 2019/07/02 19:50:48 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>//-42???????
#include <stdio.h>

int main(int ac, char **av)
{
	int r;

	if (ac == 4)
	{
		printf("av[2]=%s ", av[2]);
		printf("atv1=%d atv2=%d atv3=%d ", atoi(av[1]), atoi(av[2]), atoi(av[3]));
		if (*av[2] == '*')
		{
			r/*av[2][0]*/ = atoi(av[1]) * atoi(av[3]);
		}
		else if(*av[2] == '/')//	else if (atoi(av[2]) == '/')
		{
			r = atoi(av[1]) / atoi((av[3]));
		}
		else if(*av[2] == '%')
		{
			r/* = av[2][0]*/ = atoi(av[1]) % atoi(av[3]);
		}
		if(*av[2] == '+')
		{
			printf("i=%d", atoi(av[1]) + atoi(av[3]));
			r = atoi(av[1]) + atoi(av[3]);
		}
		else if(*av[2] == '-')
		{
			r = atoi(av[1]) - atoi(av[3]);
		}
//		r = av[2][0] - '0';
		printf("r=%d-ok\n", r);
	}
	else
		printf("\n");
//	printf("\n");
	return (0);
}
