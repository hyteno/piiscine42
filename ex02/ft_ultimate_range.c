/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akattel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:46:45 by akattel           #+#    #+#             */
/*   Updated: 2020/02/25 20:16:57 by akattel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if(min > max)
	{
		*range = (void*) 0;	
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab)*(max-min));
	while(min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	range*(tab);
	return(i);
}

int main()
{
	int min = 50;
	int max = 60;
	int range = 2;

	int *a;
	a =	ft_ultimate_range(min, max, range*);

	int i;
	i = 0;
	while (i < max - min)
	{
		printf("%d", a[i]);
		i++;
	}
	return(0);
}


