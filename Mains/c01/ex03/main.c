/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:24:20 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/09 02:08:04 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int	a;
	int	b;
	int	aa;
	int	bb;
	int *div;
	int *mod;

	a = 5;
	b = 2;
	aa = a / b;
	bb = a % b;
	div = &aa;
	mod = &bb;
	ft_div_mod(a, b, div, mod);
	printf("div=%d, mod=%d \n", *div, *mod);
	return (0);
}
