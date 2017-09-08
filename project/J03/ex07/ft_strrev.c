/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyozturk <eyozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 08:04:38 by eyozturk          #+#    #+#             */
/*   Updated: 2017/09/08 06:38:07 by eyozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int size;
	char temp;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	size -= 1;
	while (i <size)
	{
		temp = str[size];
		str[size] = str[i];
		str[i] = temp;
		i++;
		size--;
	}
	return (str);
}
