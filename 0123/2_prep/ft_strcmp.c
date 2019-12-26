/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 21:46:06 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/22 21:52:46 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
	int i;
	int r;

	r = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	r = s1[i] - s2[i];
	return (r);
}
#include <stdio.h>
int			main()
{
	char *s = "abc";
	char *s2 = "abc";

	printf("cmp=%i",ft_strcmp(s, s2));
	return (0);
}
