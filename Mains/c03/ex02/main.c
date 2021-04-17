/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:43:56 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/14 01:45:29 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char s1[33] = "Karine";
	char s2[] = " Kerlly dos Santos = A+";
	printf("%s\n", ft_strcat(s1, s2));
}
