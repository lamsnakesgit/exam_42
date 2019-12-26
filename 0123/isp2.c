/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isp2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 16:51:49 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/20 21:45:05 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int is_power_of_2(unsigned int n)
{
	int a;

	a = 2;
/*	while(n > 0)
	{
		n /= 2;
	}
	if (n == 0)
		return (1);
	else
		return(0);
*/
	//n %= 2;
	if (n == 0)
	{
		printf("%d\n", 00003);
		printf("%s\n", "bcs 0 is never anys power");
		return(0);
	}
/*/	if (n == 1)
	{
		printf("%d", 1);
		printf("%s\n", "bcs 1 is pow of 2");
		return (1);
	} 
*/
//	2* = n;
//	while (n % 2 == 0)
/*	while(n > 0)
	{
		n %= 2;
		printf("%d", 1);
		return (1);
	}
	else
	{
		printf("%d", 0);
		return (0);

	}
*/
////	n %= 2-;
	while(n > 1)
	{
		if(n % 2 == 1)
		{
			printf("%s\n", "ost 1, ret 0");
			return(0);
		}
		n /= 2;
	}
	printf("%s\n", "newof 2/");
	return(1);
}
int main()
{
	is_power_of_2(1);	
}
