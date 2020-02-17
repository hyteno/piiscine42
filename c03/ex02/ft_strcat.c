/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 23:34:37 by akattel           #+#    #+#             */
/*   Updated: 2020/02/17 16:55:46 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while(src[j] !='\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}

int main(void)
{
	char dest[] = "rock";

	char src[] = "star";

	printf("%s",ft_strcat(dest, src));
	return (0);
}
