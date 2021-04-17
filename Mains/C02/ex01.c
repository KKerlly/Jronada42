/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkerlly- <kkerlly-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:17:14 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 21:38:45 by kkerlly-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int        main(void)
{
    char src[] = "Variável 1.";
    char dest[] = "Termo da concatenação tem que ser maior que Variável 1.";
    unsigned int n;

    n = 3;

    printf("ANTES\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

    printf("DEPOIS\n\tsrc: %s\n\tdes: %s\n", src, dest);
    return (0);
}
