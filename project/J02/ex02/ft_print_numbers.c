/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyozturk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 20:36:09 by eyozturk          #+#    #+#             */
/*   Updated: 2017/09/04 15:54:04 by eyozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int compteur;

	compteur = 48;
	while (compteur != 58)
	{
		ft_putchar(compteur);
		compteur++;
	}
}
