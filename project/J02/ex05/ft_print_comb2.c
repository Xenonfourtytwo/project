/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyozturk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 16:36:06 by eyozturk          #+#    #+#             */
/*   Updated: 2017/09/04 23:33:18 by eyozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (a == 98 && b == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}
