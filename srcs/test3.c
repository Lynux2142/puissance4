/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiller <lguiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 10:24:17 by lguiller          #+#    #+#             */
/*   Updated: 2018/02/11 10:45:28 by lguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		ft_rand(int min, int max)
{
	int		fd;
	char	c[1];

	fd = open("/dev/random", O_RDONLY);
	if (read(fd, c, 1) == -1)
		return (-1);
	return ((int)(ft_abs(c[0]) % max + min));
}

int		main(void)
{
	int		x;
	int		i;
	int		average;

	average = 0;
	x = 1;
	while (x <= (6 * 7))
	{
		i = ft_rand(1, 7);
		average += i;
		printf("chiffre: %d  -  moyenne: %lf\n", i, (double)average / (double)x);
		++x;
	}
	return (0);
}