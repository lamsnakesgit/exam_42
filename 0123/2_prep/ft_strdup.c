/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 18:25:12 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/21 18:46:44 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t			ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *sdup;
	int i;

	sdup = (char *)malloc(sizeof(char) * ft_strlen(src));//char/*?
	if (!sdup)
		return(0);
	i = -1;
	while (src[++i])
	{
		sdup[i] = src[i];
	}
	sdup[i] = '\0';
	return (sdup);
}

int main()
{
	int a;
	
	printf("ft_strdup=%s", ft_strdup("KEKKEKKEK"));
	return (0);
}
