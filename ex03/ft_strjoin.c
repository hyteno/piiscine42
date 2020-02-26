/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:20:29 by akattel           #+#    #+#             */
/*   Updated: 2020/02/25 22:46:47 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int 		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int		ft_lngh(char **strs, int size, char *sep)
{
	int i;
	int lng;

	i = 0;
	lng = 0;
	
	while(i < size)
	{
		lng = lng + ft_strlen(sep) + 1;
		i++;
	}
	lng = lng + (size - 1)*ft_strlen(sep) + 1;
	return (lng);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return(dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char	*str;

	if(size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return(str);
	}
	if(!(str = malloc (sizeof(char) * ft_lngh(strs, size, sep))))
		return(NULL);
	*str = 0;
	i = 0;
	while(i < size)
	{
		ft_strcat(str, strs[i]);
		if(i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return(str);
}

int main()
{
	char *s1;
	char *tab[2];
	tab[0] = "hello";
	tab[1] = "world";
	s1 = ft_strjoin(2, tab, " : ");
	printf("%s\n", s1);
	return (0);
}
