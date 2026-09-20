/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:32:33 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/20 19:56:07 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	mainTester(Span &first)
{
	try
	{
		int result1 = first.shortestSpan();
		int result2 = first.longestSpan();

		std::cout << "El menor es: " << result1 << std::endl;
		std::cout << "El mayor es: " << result2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}
}

int	main()
{
	std::cout << "\n===== DEFAULT 42 TEST ====="<< std::endl;
	
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n===== DEFAULT TEST ====="<< std::endl;

	Span	first(5);
	
	std::vector<int> numbers;
	
	int array[] = {1, 2, 3, 4, 5};

	first.addNumbers(numbers.begin(), numbers.end());

	mainTester(first);

	return (0);
}
