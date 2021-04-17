/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:24:20 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/10 23:17:19 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 10;
	int i = 0;
	
	ft_rev_int_tab(tab, size);
	
	while (i < size)
	{
	printf("%d ", tab[i]);
	i++;
	}
	return (0);
}
