/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmaitre <thmaitre@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 09:17:53 by thmaitre          #+#    #+#             */
/*   Updated: 2024-11-18 09:17:53 by thmaitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	void	*content;
	char	c;

	c = 'c';
	content = &c;
	printf("%c", *(char *)content); //dereference le cast lui meme
}
