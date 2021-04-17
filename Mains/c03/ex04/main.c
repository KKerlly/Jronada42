/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:51:01 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/14 04:31:26 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char	s1[] = "Hello world, my friends are here.";
	char	s2[] = "friends";

	printf("%s\n", ft_strstr(s1, s2));
}
