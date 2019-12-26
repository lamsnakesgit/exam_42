/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 23:54:39 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/30 17:31:39 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}	
}
char *ft_strrev(char *str)
{
	int i;
	char  tmp;
	int beg;
	int len;

	len = 0;
	beg = 0;
	i = 0;
//i	while(str)
//		str++;
//	str--;
/////	tmp = 0;
	while(str[i])
		i++;
	len = i;
	i--;
//	buf = str[beg];
	len = len / 2;
//	while(beg <= len)
	while(len)
	{
//		iwrite(1, &str[beg], 1);
		tmp = str[beg];
		str[beg] = str[i];
		str[i] = tmp;
//		write(1, &str[beg], 1);
	//	putstr
		beg++;
		i--;
		len--;
	}
	putstr(str);
	return(str);
}
int main()
{
	char *str = "abc";//*?????????
//	char str[] = "mamacita";
	ft_strrev(str);
}
