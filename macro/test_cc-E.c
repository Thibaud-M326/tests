/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cc-E.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmaitre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:32:59 by thmaitre          #+#    #+#             */
/*   Updated: 2024/10/29 14:33:09 by thmaitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define BONJOUR\
    do {\
        puts("Bonjour !");\
    } while(0)
#define AUREVOIR\
    do {\
        puts("Au revoir !");\
    } while(0)

int main(void)
{
    if (1)
        BONJOUR; /* ok */
    else
        AUREVOIR;

    return 0;
}

