/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:24:20 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/09 00:55:09 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int	nbr;
	int	*pnbr1;
	int	**pnbr2;
	int	***pnbr3;
	int	****pnbr4;
	int	*****pnbr5;
	int	******pnbr6;
	int	*******pnbr7;
	int	********pnbr8;
	int	*********pnbr9;

	nbr = 22;
	pnbr1 = &nbr;
	pnbr2 = &pnbr1;
	pnbr3 = &pnbr2;
	pnbr4 = &pnbr3;
	pnbr5 = &pnbr4;
	pnbr6 = &pnbr5;
	pnbr7 = &pnbr6;
	pnbr8 = &pnbr7;
	pnbr9 = &pnbr8;

	printf("Antes: %d \n", nbr);
	ft_ultimate_ft(pnbr9);
	printf("Depois: %d \n", nbr);
	return (0);
}
