/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:04:39 by akattel           #+#    #+#             */
/*   Updated: 2020/02/25 16:46:13 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if(min > max)
	{
		return (NULL);
	}
	tab = (int*)malloc(sizeof(*tab)*(max-min));
	while(min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return(tab);
}

int main()
{
	int min = 50;
	int max = 60;

	int *a;
	a =	ft_range(min, max);

	int i;
	i = 0;
	while (i < max - min)
	{
		printf("%d", a[i]);
		i++;
	}
	return(0);
}

