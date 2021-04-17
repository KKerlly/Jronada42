/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:20:40 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/16 19:38:12 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *prog)
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

	pa = argc - 1;
	while (pa >= 1)
	{
		ft_rev_params(argv[pa]);
		pa--;
	}
	return (0);
}
