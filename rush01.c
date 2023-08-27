/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:37:00 by truello           #+#    #+#             */
/*   Updated: 2023/08/27 14:12:31 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	g_coin_hg = '/';
const char	g_coin_hd = '\\';
const char	g_coin_bg = '\\';
const char	g_coin_bd = '/';
const char	g_line = '*';
const char	g_col = '*';
const char	g_inter = ' ';

void	ft_putchar(char c);

char	is_corner(int line_max, int col_max, int line, int col)
{
	if (line == 0 && col == 0)
		return (g_coin_hg);
	else if (line == 0 && col == col_max - 1)
		return (g_coin_hd);
	else if (line == line_max - 1 && col == 0)
		return (g_coin_bg);
	else if (line == line_max - 1 && col == col_max - 1)
		return (g_coin_bd);
	else
		return (0);
}

char	is_line(int line_max, int line)
{
	if (line == 0 || line == line_max - 1)
		return (g_line);
	return (0);
}

char	is_col(int col_max, int col)
{
	if (col == 0 || col == col_max - 1)
		return (g_col);
	return (g_inter);
}

void	write_char(int line_max, int col_max, int line, int col)
{
	char	c_to_write;

	c_to_write = is_corner(line_max, col_max, line, col);
	if (c_to_write == 0)
	{
		c_to_write = is_line(line_max, line);
		if (c_to_write == 0)
			c_to_write = is_col(col_max, col);
	}
	ft_putchar(c_to_write);
}

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 0;
	while (line < y)
	{
		col = 0;
		while (col < x)
		{
			write_char(y, x, line, col);
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
