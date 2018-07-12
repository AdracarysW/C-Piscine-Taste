/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaraich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 13:07:06 by awaraich          #+#    #+#             */
/*   Updated: 2018/07/12 13:20:20 by awaraich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_print_reverse_alphabet(void)
{
	char ch = 'z';
	while(ch >= 'a')
	{
		ft_putchar(ch);
		ch--;
	}
}
