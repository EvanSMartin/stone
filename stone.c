/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stone.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:46:07 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/03 15:22:52 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	stone(int height)
{
	for (int line = 1; line <= height; line++)
	{
		int C = 1;
		for (int i = 1; i <= line; i++)
		{
			printf("%d ", C);
			C = C * (line - i) / i;
		}
		printf("\n");
	}
}

int		main()
{
	int n = 7;
	stone(n);
	return (0);
}

/*int		main(int ac, char **ag)
{
	if (ac != 2)
		return (1);
	stone(atoi(ag[1]));
	return (0);
}
*/
