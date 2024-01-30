/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaazaa <yzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:27:22 by yzaazaa           #+#    #+#             */
/*   Updated: 2024/01/30 20:38:03 by yzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*get_pwd(char **envp)
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
