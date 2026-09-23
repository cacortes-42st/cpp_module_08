/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 12:52:26 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/23 10:32:34 by cacortes         ###   ########.fr       */
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
	
	try
	{
		easyfind(num2, 50);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Ocurrence NOT Found." << std::endl;
	}
		return (0);
}