/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:19:56 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/16 19:30:06 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *prog)
{
	while (*prog)
	{
		write(1, &*prog, 1);
		prog++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int	pa;

	pa = 1;
	while (pa < argc)
	{
		ft_print_params(argv[pa]);
		pa++;
	}
	return (0);
}
