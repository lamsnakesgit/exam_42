/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 21:57:12 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/20 14:24:01 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void putstr(char *c)
{
	int i;

	i = 0;
	while(c[i])
	{
		write(1, &c[i], 1);
		i++;
//		printf("%d\n", 33444);	
	}
	printf("%d\n", 4444);
}
int ft_strlen(char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
		i++;
////	printf("%d\n", i);
	return (i);
}
char *ft_strdup(char *src)
{
	char *ptr;
	int a;

	a = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));

	if (ptr == NULL)
		return (0);
	while(a < ft_strlen(src))
	{
		ptr[a] = src[a];
		a++;
	}
	ptr[a] = '\0';
	putstr(ptr);
	return (ptr);
}
int main()
{
	char src[] = "I weird stuff";
	ft_strdup(src);
}

