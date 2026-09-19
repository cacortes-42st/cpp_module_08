/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 12:52:38 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/19 10:18:32 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
void	easyfind(T container, int intg)
{
	if (container.find(intg) != std::string npos)
		std::cout << "Ocurrence FOUND!!" << std::endl;
	else
		std::cout << "Ocurrence NOT found." << std::endl;
}

#endif