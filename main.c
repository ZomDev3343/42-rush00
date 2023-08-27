/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:14:54 by truello           #+#    #+#             */
/*   Updated: 2023/08/27 12:53:20 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		write(1, str, 1);
		i++;
		str++;
	}
	str -= i;
}

int	main(void)
{
	ft_putstr("Rush (5, 3) :\n");
	rush(5, 3);
	ft_putchar('\n');
	ft_putstr("Rush (5, 1) :\n");
	rush(5, 1);
	ft_putchar('\n');
	ft_putstr("Rush (1, 1) :\n");
	rush(1, 1);
	ft_putchar('\n');
	ft_putstr("Rush (1, 5) :\n");
	rush(1, 5);
	ft_putchar('\n');
	ft_putstr("Rush (4, 4) :\n");
	rush(4, 4);
	return (0);
}
