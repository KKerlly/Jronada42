/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:34:50 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/10 23:20:51 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		n = tab[i];
		tab[i] = tab[size];
		tab[size] = n;
		i++;
		size--;
	}
}
