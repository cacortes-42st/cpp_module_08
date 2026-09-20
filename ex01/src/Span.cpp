/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 09:33:57 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/20 19:51:02 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) 
{
	std::cout << "Span default constructor called." << std::endl;
}

Span::Span(const Span &other)
{
	*this = other;
	std::cout << "Span default copy constructor called." << std::endl;
}

Span &Span::operator=(const Span &value)
{
	if (this == &value)
		return *this;

	std::cout << "Span assigment operator called." << std::endl;

	return *this;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}


Span::Span(unsigned int v)
{
	this->N = v;
}


void Span::addNumber(unsigned int num)
{

	if (this->IntArray.size() != this->N)		
		this->IntArray.push_back(num);
	else 
		throw ElementsStoredException();

}


const char *Span::ElementsStoredException::what() const throw()
{
	return "The limit for stored items has been reached.";
}

const char *Span::NoValidNumbersException::what() const throw()
{
	return "The number of values ​​to store in the array is insufficient.";
}


int Span::shortestSpan()
{
	if (this->IntArray.size() <= 1)
		throw NoValidNumbersException();
	
	std::sort(this->IntArray.begin(), this->IntArray.end());

	unsigned int mn = this->IntArray[1] - this->IntArray[0];
	

	std::vector<int>::iterator it = this->IntArray.begin();

	while (it + 1 != this->IntArray.end())
	{
		unsigned int sh = *(it + 1) - *it;
			 
		if (sh < mn)
			mn = sh;
		++it;
	}

	return (mn);
}

int Span::longestSpan()
{
	if (this->IntArray.size() <= 1)
		throw NoValidNumbersException();

	int min = *std::min_element(this->IntArray.begin(), this->IntArray.end());
	int max = *std::max_element(this->IntArray.begin(), this->IntArray.end());

	return (max - min);
}