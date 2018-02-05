/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiller <lguiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 14:02:52 by lguiller          #+#    #+#             */
/*   Updated: 2018/02/05 14:04:27 by lguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

void	print_croix(void)
{
	ft_putstr("\033[33m");
	ft_putchar('x');
	ft_putstr("\033[0m");
}

void	print_rond(void)
{
	ft_putstr("\033[31m");
	ft_putchar('o');
	ft_putstr("\033[0m");
}

void	print_map(void)
{
	ft_putstr("\033[34m");
	ft_putchar('|');
	ft_putstr("\033[0m");
}

void	print_top(void)
{
	ft_putstr("\033[34m");
	ft_putendl(" _ _ _ _ _ _ _");
	ft_putstr("\033[0m");
}
