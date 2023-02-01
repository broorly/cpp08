/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:23:15 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/31 18:37:52 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span(/* args */)
{
	std::cout<<"default constructor called" << std::endl;
}

Span::Span(unsigned int number)
{
	_number = number;
}

Span::~Span()
{
}

Span :: Span(const Span &span)
{
	*this = span;
}

Span  &Span :: operator=(const Span& span)
{
	_number = span._number;
	_vector = span._vector;
	return(*this);
}

void Span::addNumber(int n)
{
	if(_vector.size() < _number)
		_vector.push_back(n);
	else
		throw  VECTOR_FULL();
}

const char* Span ::VECTOR_FULL :: what() const throw() {
       	return "VECTOR IS FULL!!";
   	}
	
const char* Span ::NOSPAN :: what() const throw() {
       	return "NO SPAN!!";
   	}
int Span ::longestSpan()
{
	std :: vector<int> tmp;
	int x;
	
	x = 0;
	if(_vector.size() <= 1)
		throw NOSPAN();
	tmp = _vector;
	std::sort(tmp.begin(),tmp.end());
	x = tmp[tmp.size()-1] - tmp[0];
	return(x);
}
int Span::shortestSpan()
{
	int x;
	int y= 0;
	std :: vector<int> tmp;

	x = 0;
	tmp = _vector;
	if(_vector.size() <= 1)
		throw NOSPAN();
	std::sort(tmp.begin(),tmp.end());
	x = tmp[0] - tmp[1];
		if(x < 0)
			x*=-1;
	for(unsigned int i= 1 ; i < (_vector.size()-1); i++)
	{
		y = tmp[i] - tmp[i+1];
		if(y < 0)
			y*=-1;
		if(x > y)
			x = y;
	}
	return(x);
}
void Span :: fillvector()
{
	std::srand(time(NULL));
    int random = std ::rand();
	for(unsigned int i =0; i < _number ; i++)
	{
		random = std::rand();
		_vector.push_back(random);
	}
}