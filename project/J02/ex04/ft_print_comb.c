/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyozturk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 07:48:18 by eyozturk          #+#    #+#             */
/*   Updated: 2017/09/04 23:32:44 by eyozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a != 7 || b != 8 || c != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
