/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:49:23 by jmartos-          #+#    #+#             */
/*   Updated: 2024/08/25 19:54:11 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath> // Para usar "roundf"

class Fixed
{
	private:
		int					_fixed_point_number;
		static const int	_bits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int int_number);
		Fixed(const float float_number);
		~Fixed();
		Fixed	&operator=(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

/* Operador de sobrecarga. */
std::ostream	&operator<<(std::ostream &outputStream, const Fixed &_fixed_point_number);
