/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awaraich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:37:19 by awaraich          #+#    #+#             */
/*   Updated: 2018/07/12 12:20:27 by awaraich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char ch = 'a';
    while (ch <= 'z')
    {
        ft_putchar(ch);
        ch++;
    }
}

int     main(void)
{
    ft_print_alphabet();
    return (0);
}