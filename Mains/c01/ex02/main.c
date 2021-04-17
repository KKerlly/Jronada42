/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:24:20 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/09 00:24:28 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int	a;
	int	b;
	int *pa;
	int *pb;

	a = 2;
	pa = &a;
	b = 5;
	pb = &b;
	printf("Antes: %d, %d \n", a, b);
	ft_swap(pa,pb);
	printf("Depois: %d, %d \n", a, b);
	return (0);
}
