/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaazaa <yzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:34:02 by yzaazaa           #+#    #+#             */
/*   Updated: 2024/02/17 21:51:21 by yzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	print_env(t_env *env, int flag)
{
	env = env->next;
	while (env)
	{
		if (flag)
		{
			if (env->value)
			{
				printf("%s=", env->key);
				printf("%s\n", env->value);
			}
		}
		else
		{
			printf("declare -x %s", env->key);
			if (env->value)
			{
				printf("=\"%s\"", env->value);
			}
			printf("\n");
		}
		env = env->next;
	}
}
