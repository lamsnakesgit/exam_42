/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_is_power_of_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:34:05 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/18 19:54:15 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_two(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}
#include <stdio.h>
int main()//funcc only
{
	int a = 5;

	is_power_of_two(  a);
	printf("isp2=%d", is_power_of_two(a));
	return (0);
}
