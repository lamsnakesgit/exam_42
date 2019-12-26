/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_prep.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:26:12 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/18 17:31:52 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int i;

	i = 0;//INITIALIZE!!!
	while (str[i])
		++i;
	return (i);
}
#include <stdio.h>
int main()  //func onlu
{
	char *str;

	str = "googoogle";
	ft_strlen(str);
	printf("int ftstr=%i\n", ft_strlen(str));
	return(0);
}
