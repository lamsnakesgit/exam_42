/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 18:43:57 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/16 18:54:44 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1, &str[i], 1);
		i++;
}
int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[2][j])
		{
			if (argv[2][j++] == argv [1][i])
				i += 1;
		}
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
		write(1, "\n", 1);
		return (0);
}
