/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 19:13:44 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/16 20:17:40 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
char		*ft_strcpy(char 000 *s1, char *s2)
{
	int i;
	char *ptr;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	putstr(s1);
	return (ptr);
}
int main()
{
	char *s1;
	char *s2;

	s2 = "piscine";
	ft_strcpy(s1, s2);
	return (0);
}
