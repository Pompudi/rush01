/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:35:53 by fadelia           #+#    #+#             */
/*   Updated: 2021/01/23 14:59:39 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void write_matrica(int col, int row , char matrica[col][row])
{
	int i_col;
	int i_row;

	i_col = 0;
	i_row = 0;
	while(i_col <= col)
	{
		while (i_row <= row)
		{
			ft_putchar(matrica[col][row]);
		}
	}
}

void	rush(int y, int x)
{
	int ix;
	int iy;

	ix = 0;
	char matrica[x][y];
	matrica[0][0] = '/';
	if (( x != 1) && ( y != 1))
	{
		matrica[x][y] = '/';
		matrica[x][0] = '\\';
		matrica[0][y] = '\\';
	}
	if (x == 1)
		matrica[x][y] = '\\';
	if (y == 1)
		matrica[x][y] = '\\';
	while (ix != x){
		while (iy != y)
		{
			if ((ix == 0) || (ix == (x-1)))
				matrica[ix][iy] = '*';
			else if ((iy == 0) || (iy == (y-1)))
				matrica[ix][iy] = '*';
			else 
				matrica[ix][iy] = ' ';
			ix++;
			iy++;
		}
		write_matrica(x, y, matrica);
	}
}
int		main(void)
{
	rush(5, 3);
	return (0);
}

