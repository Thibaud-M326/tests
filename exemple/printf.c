/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exemple.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmaitre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:09:06 by thmaitre          #+#    #+#             */
/*   Updated: 2024/10/30 17:32:01 by thmaitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char	str[] = "bonjour";

	//print : n
	printf("%c\n", *(str + 2));
	printf("%c\n", str[2]);

	//print : njour
	printf("%s\n", (str + 2));
	printf("%s\n", &(str[2]));

	return (0);
}
