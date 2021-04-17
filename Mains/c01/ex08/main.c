/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:24:20 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/10 23:45:19 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[10] = {10, 1, 23, 3, 4, 9, 6, 8, 7, 5};
	int size = 10;
	int i = 0;
	
	/* Antes*/
	while (i < size)
	{
	printf("%d ", tab[i]);
	i++;
	}

	ft_sort_int_tab(tab, size);/* Depois*/
	
	i = 0;
	printf("\n");
	while (i < size)
	{
	printf("%d ", tab[i]);
	i++;
	}
	return (0);
}
