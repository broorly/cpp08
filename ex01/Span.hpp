/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:23:18 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/31 18:47:24 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<algorithm>
#include<vector>
#include<array>

class Span
{
private:
	unsigned int 			_number;
	std::vector<int>		_vector;
public:
	Span(/* args */);
	Span(unsigned int number);
	~Span();
	Span(const Span &span);
  	Span &operator=(const Span& span);
	void addNumber(int n);
	class VECTOR_FULL : public std::exception {
		public:
    	virtual const char* what() const throw() ;
	};
	class NOSPAN : public std::exception {
		public:
    	virtual const char* what() const throw() ;
	};
	int shortestSpan();
	int longestSpan();
	void fillvector();
};

