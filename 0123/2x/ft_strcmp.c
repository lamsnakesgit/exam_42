/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 20:52:35 by ddratini          #+#    #+#             */
/*   Updated: 2019/05/24 21:33:18 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 02
int    ft_strcmp(char *s1, char *s2)
{
	int r;
	int i;
	r = 0;
	while (i[s1] && i[s2] && i[s1] == i[s2])
	{
		//s1++;
		//s2++;
		i++;
	}
	r = i[s1] - i[s2];
	return (i[s1] - i[s2]);//(*s1 - *s2);
}
//main
#include <stdio.h>
int main()
{
	char s1[] = "avabc";
	char s2[] = "vaabc";
	printf("strcmo=%d\n", ft_strcmp(s1, s2));
//	printf("strcmo=%d\n", ft_strcmp(0, s2));
	return (0);
}
