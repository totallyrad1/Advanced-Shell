/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaazaa <yzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:27:22 by yzaazaa           #+#    #+#             */
/*   Updated: 2024/02/06 15:43:48 by yzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*get_pwd(t_env **envp)
{
	char	*pwd1;

	pwd1 = getcwd(NULL, 0);
	if (!pwd1)
	{
		perror("getcwd");
		free(pwd1);
		return (NULL);
	}
	return (pwd1);
}
