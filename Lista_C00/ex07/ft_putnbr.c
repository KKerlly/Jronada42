/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:22:52 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/15 23:59:28 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(int n);
void	ft_putnbr(int nb);

void	ft_number(int n)
{
	int		i;
	char	digits[10];

	i = 0;
	while (n > 0)
	{
		digits[i] = ((n % 10) + 48);
		n = (int)(n / 10);
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &digits[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
	else if (nb > 0)
		ft_number(nb);
	else if (nb == -2147483648)
	{
		nb = 147483648;
		write(1, "-2", 2);
		ft_number(nb);
	}
	else
	{
		nb = (nb * (-1));
		write(1, "-", 1);
		ft_number(nb);
	}
}
