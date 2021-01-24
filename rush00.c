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

void ft_putchar(char c);

void write_rectangle(int ix, int iy, int x, int y)
{
	if (ix == 0)
	{
		if (iy == 0)
		{
			ft_putchar('0');
		}
		else if (iy == y - 1)
		{
			ft_putchar('0');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else if ( ix == x - 1)
	{
		if ( iy == 0)
		{
			ft_putchar('0');
		}
		else if ( iy == y - 1)
		{
			ft_putchar('0');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else if ((iy == 0) || (iy == y - 1))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
	
}

void rush(int y, int x)
{
	int ix;
	int iy;

	ix =0;
	while (ix < x)
	{
		iy = 0;
		while (iy < y)
		{
			write_rectangle(ix, iy, x, y);
			iy++;
		}
		ft_putchar('\n');
		ix++;
	}
}
