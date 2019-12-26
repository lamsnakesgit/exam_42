/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 19:29:03 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/18 20:07:31 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //af: ---/ wr func
#include <stdio.h>

int max (int* tab, unsigned int len)
{
	int i;
	int buf;

	i = 0;
	buf = 0;
	if (len == 0)
		return (0);
	if (tab == 0)
		return (0);
	buf = tab[i];
	while(i < len)
	{
		if (tab[i] > buf)
			buf = tab[i];
		i++;
	}
	printf("%d", buf);
	return (buf);
}

int main()
{
	int tab[0] = { };
	int len;

	len = 1;
	max(tab, len);
}
