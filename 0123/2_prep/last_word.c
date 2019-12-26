/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 18:47:13 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/21 20:08:29 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char**av)
{
	int i;

	i = -1;
/*	*av = "				AFTERFILE";
	while (av[1][i] == ' ') ++i;// || av[1][i] == '	');
	printf("i=%i", i);*/ // sega>???
	if (ac == 2)
	{
		while (av[1][++i]);
		while (av[1][--i] && (av[1][i] == ' ' || av[1][i] == '\t'));
//		--i;
		while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
			--i;
		while (av[1][++i] && av[1][i] != ' ' &&  av[1][i] != '\t')
			ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	//printf("i=%i", i);
	return (0);
}
