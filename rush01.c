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

void	ft_putchar(char c);

void write_matrica(int col, int row , char **matrica)
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
	}ß
}

void	is_corner(int x, int y, char **matrica)
{
	if ((x == 0) && (y == 0))
	{
		matrica[x][y] = '/';
	}
	else if ((x == 0) && (y))
}
void	rush(int y, int x)
{
	int ix;
	int iy;

	ix = 0;
	char matrica[x][y];
	while (ix <= x )
	{
		iy = 0;
		while (iy <= y)
		{
			is_a

	write_matrica(x, y, matrica);
