/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 08:45:40 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/21 09:08:43 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h> //DOOP!! HEADER FILES>?
#include <stdio.h>
int atoi(char *str)
{
	int i;
	int sig;
	int r;

	sig = 1;
	r = 0;
	i = 0;
	while(str[i] == '\r' || str[i] == '\v' || str[i] == '\f' || str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sig = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	r = r * sig;
	printf("%d", r);
//	return(r * sig);
	return(r);
}
int main()
{
//	printf("%d", atoi(" \t\n\f\v\t	+--+23424"));
	char str[] = " \t\n\f\v\t  -23424";
	atoi(str);
	return (0);
}
