/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyozturk <eyozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 02:40:48 by eyozturk          #+#    #+#             */
/*   Updated: 2017/09/08 07:10:03 by eyozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int nb;
	int signe;
	int i;

	i = 0;
	signe = 0;
	nb = 0;
	while (str[i] < 33 || str[i] == 127)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		{
			signe = (str[i] == '-' ? 1 : 0);
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
		return (signe == 1 ? -nb : nb);
}

int		main(void)
{
	printf("%d\n", ft_atoi("  -  250"));
	printf("%d\n", ft_atoi("  250"));
	printf("%d\n", ft_atoi("+5156116549684984949"));
}
