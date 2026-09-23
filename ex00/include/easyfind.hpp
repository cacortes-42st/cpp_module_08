/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 12:52:38 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/23 10:27:14 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template <typename T>
void	easyfind(T &container, int intg)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), intg);

	if (it != container.end())
		std::cout << "Ocurrence FOUND!!" << std::endl;
	else
		throw std::exception();
}

#endif