/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyozturk <eyozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 01:55:38 by eyozturk          #+#    #+#             */
/*   Updated: 2017/09/08 04:02:27 by eyozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	toto(char c)
{
	c = c - 65;
	c = ((c + 42)% 26);
	c = c + 65;
	return (c);
}

char	otot(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c); 
}

char	rot(char c)
{
	if (c >= 65 && c <= 90)
		return (toto(c));
	else if (c >= 97 && c <+ 122)
		return (otot(c));
	else
		return(c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		str[i] = rot(str[i]);
		i++;
	}
	return (str);
}

int		main(void)
{
	char	str[] = "toto";
	printf("%s", ft_rot42(str));
	return 0;
}