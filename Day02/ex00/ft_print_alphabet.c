/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaraich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:37:19 by awaraich          #+#    #+#             */
/*   Updated: 2018/07/11 12:57:47 by awaraich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_print_alphabet(void)
{
    char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
}

void 	main(void)
{
	ft_print_alphabet();
}
