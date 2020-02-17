/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:39:08 by akattel           #+#    #+#             */
/*   Updated: 2020/02/17 20:04:25 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0' && i<nb)
		i++;
	while(src[j] !='\0' && j<nb)
	{
		dest[i + j] = src [j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}

int main(void)
{
	unsigned int nb;
	nb = 3;
	char dest[] = "rock";

	char src[] = "star";

	printf("%s",ft_strncat(dest, src, nb));
	return (0);
}

