/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:54:49 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/18 20:07:40 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int max;
	int i;

	i = 0;
//	while (tab[i])
//		++i;
//	if (i >= len)
//		error ni
	if (tab == 0)//emprty array?
		return (0);
	max = tab[i];
	while (/*tab[i] &&  debug!*/ /*tab[i] != 0 && */i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		++i;
	}
	return (max);
}
#include <stdio.h>

int main()//func only
{
	int tab[10] = {1,0, 6, 5, 7,3, 2, 3,8, 4};
	unsigned int len = 100;
//	max(tab, len);
	printf("max=%i", max(tab, len));
	return (0);
}
