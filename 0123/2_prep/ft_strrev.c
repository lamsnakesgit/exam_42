/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 22:07:09 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/30 18:21:33 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char    *ft_strrev(char *str)
{
	int i;
	int b;
	int e;
	char tmp;

	i = 0;
	printf("LELstr=%s\n",str);///////////////////
	printf("LELSTRI=%c\n", str[i]);//with/out cat -e ./ ???be
	while (str[i])
	{printf("si=%c",str[i]);	++i;}
	e = i - 1;
	printf("str[[=%c\n", str[e]);
	e = i - 1;//
	b = i / 2;//!!(i- 1)/ 2;
	printf("i=%d e=%d\n", i,e);
	i = 0;
	printf("b=%d \n",b);
/*	while(b)//(i < b)//(i <= b)
	{
	/ *	tmp = str[i];
		str[i] = str[1];// - 1];
	//	str[e - 1] = tmp;* /
		tmp = str[e / *- 1* /];
		printf("str[i]=%c\n", str[e/ *-1* /]);
//		str[e / *- 1* /] = sr[i];//be
		printf("aa\n");
//		str[i] = tmp;//be*/
	while (i < b)
	{
		tmp = str[i];
		str[i] = str[e];
		str[e] = tmp;
		++i; --e; 
	}
/*	while (b)
	{
		tmp = str[i];
		str[i] = str[e];
		str[e] = tmp;
		++i;
		--e;
		--b;
	}*///googfdddd
	return (str);
}
#include <stdio.h>
int main()
{
	char *s = "abc";//"";FIIIIIIIUU
//	char s[] = "abc";
//	char s[] = "abcdef";
	printf("\n\t%s", ft_strrev(s));
//	s = printf; //ft_strrev.c:58:4: error: array type 'char [7]' is not assignable
//	        s = printf;
	return (0);
}
