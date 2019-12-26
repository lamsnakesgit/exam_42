/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 23:54:39 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/30 17:22:10 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, s + i, 1);
		++i;
	}
}
char		*revstr(char *str)
{
	int		i;
	char	tmp;
	int		beg;
	int		len;

	len = 0;
	beg = 0;
	i = 0;
	while (str[i])
		i++;
	len = i;
	i--;
	len = len / 2;
	while (len)
	{
		tmp = str[beg];
//		str[beg] = str[i];
		str[i] = tmp;
		beg++;
		i--;
		len--;
	}
	ft_putstr(str);
	return (str);
}
int main()
{
	char *s = "abc";
	revstr(s);
	return(0);
}
