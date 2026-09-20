/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:33:44 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/20 19:51:07 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class	Span
{
	private:
		unsigned int N;
		std::vector<int> IntArray;
		

	public:

		Span();
		Span(const Span &other);
		Span &operator=(const Span &value);
		~Span();

		Span(unsigned int N);
		void addNumber(unsigned int num);
		int shortestSpan();
		int longestSpan();

	class	ElementsStoredException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	class	NoValidNumbersException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif