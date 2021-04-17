/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:51:01 by kkerlly-          #+#    #+#             */
/*   Updated: 2021/04/14 16:26:28 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int n = 0;
	char	str[] = "my friends are here.";
	char	buf[29] = "Hello, ";
	int size = 28;
	
	n = ft_strlcat(buf, str, size);

	printf("buf: '%s'\n", buf);
	printf("size: %d\n", n);
}
