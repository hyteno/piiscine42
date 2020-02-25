/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:32:48 by akattel           #+#    #+#             */
/*   Updated: 2020/02/25 16:03:19 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	char *str;
	int len;

	i = 0;
	len = 0;
	while(src[len] != '\0')
	{
		len++;
	}
	str = (char *) malloc(sizeof(i));
	while(i < len)
	{
		str[i] = src[i];
		i++;
	}
	return(str);
}

int main()
{
	char src[] = "helloworld";
   	printf("%s",ft_strdup(src));

	return(0);
}
