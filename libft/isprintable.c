/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprintable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmaitre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:33:07 by thmaitre          #+#    #+#             */
/*   Updated: 2024/11/05 09:34:20 by thmaitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int main()
{
   int c;
   for(c = 1; c <= 127; ++c)
   	if (isprint(c)!= 0)
	{
             printf("%d \n", c);
             printf("%c \n\n", c);
	}
   return 0;
}
