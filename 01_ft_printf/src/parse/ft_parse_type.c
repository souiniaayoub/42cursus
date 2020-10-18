/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:16:54 by jaeskim           #+#    #+#             */
/*   Updated: 2020/10/18 22:23:12 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int		ft_parse_type(
		char **out,
		char **format,
		va_list ap,
		t_format_specifier *pformat)
{
	ft_test_print_sturct(format, pformat);
	if (**format == 'd')
		return (ft_print_number(out, format, ap, pformat));
	free(pformat);
	return (-1);
}
