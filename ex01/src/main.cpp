/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:32:33 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/23 10:48:55 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	mainTester(Span &first)
{
	try
	{
		int result1 = first.shortestSpan();
		int result2 = first.longestSpan();

		std::cout << "The shortest is: " << result1 << std::endl;
		std::cout << "The longest is: " << result2 << std::endl;
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

	Span	first(3);
	
	std::vector<int> numbers;
	
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);

	first.addSomeNumbers(numbers.begin(), numbers.end());

	mainTester(first);


	std::cout << "\n===== ONE NUMBER TEST ====="<< std::endl;

	Span	second(5);
	
	std::vector<int> number;
	
	number.push_back(10);

	second.addSomeNumbers(number.begin(), number.end());

	mainTester(second);	


	std::cout << "\n===== SO MUCH NUMBERS TEST ====="<< std::endl;

	Span	third(15000);
	
	std::vector<int> block(15000);
	
	for (unsigned int i = 0; i < block.size(); i++)
		block[i] = i;

	third.addSomeNumbers(block.begin(), block.end());

	mainTester(third);	

	
	std::cout << "\n===== NEGATIVE NUMBERS TEST ====="<< std::endl;

	Span	fourth(5);
	
	std::vector<int> nonumbers;
	
	nonumbers.push_back(10);
	nonumbers.push_back(-5);
	nonumbers.push_back(3);
	nonumbers.push_back(-3);
	nonumbers.push_back(50);

	fourth.addSomeNumbers(nonumbers.begin(), nonumbers.end());

	mainTester(fourth);
	
	std::cout << "\n===== END ====="<< std::endl;
	
	return (0);
}
