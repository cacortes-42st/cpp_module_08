/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 12:52:26 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/19 20:59:11 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::cout << "\n===== FOUND TEST ====="<< std::endl;

	std::vector<int> num1;

	num1.push_back(10);
	num1.push_back(20);
	num1.push_back(30);
	num1.push_back(40);
	num1.push_back(50);
	
	easyfind(num1, 50);


	std::cout << "\n===== NOT FOUND TEST ====="<< std::endl;
	
	std::vector<int> num2;

	num2.push_back(10);
	num2.push_back(20);
	
	easyfind(num2, 50);
	return (0);
}