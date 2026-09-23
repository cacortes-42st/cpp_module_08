/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:07:49 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/23 11:14:14 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "\n===== DEFAULT 42 TEST ====="<< std::endl;
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	

	std::cout << "\n===== EMPTY STACK TEST ====="<< std::endl;

	MutantStack<int> empStack;

	std::cout << "Stack size: " << empStack.size() << std::endl;

	MutantStack<int>::iterator it1 = empStack.begin();
	MutantStack<int>::iterator ite1 = empStack.end();

	if (it1 == ite1)
		std::cout << "begin() == end()" << std::endl;
	else
		std::cout << "begin() != end()" << std::endl;

	return 0;
}

/*
int main()
{
	std::cout << "\n===== DEFAULT 42 TEST ====="<< std::endl;
	
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << list.back() << std::endl;

	list.pop_back();

	std::cout << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	//std::stack<int> s(list);
	

	std::cout << "\n===== EMPTY STACK TEST ====="<< std::endl;

	std::list<int> empStack;

	std::cout << "Stack size: " << empStack.size() << std::endl;

	std::list<int>::iterator it1 = empStack.begin();
	std::list<int>::iterator ite1 = empStack.end();

	if (it1 == ite1)
		std::cout << "begin() == end()" << std::endl;
	else
		std::cout << "begin() != end()" << std::endl;

	return 0;
}*/