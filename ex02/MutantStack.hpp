/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:08:57 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/31 18:16:25 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stack>
#include<iostream>

template <typename T>
class MutantStack : public  std::stack<T>
{
private:
		
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(/* args */){};
	~MutantStack(){};
	MutantStack(const MutantStack &MutantStack){
		*this = MutantStack;
	}
  	MutantStack &operator=(const MutantStack& MutantStack){
		(void)MutantStack;
		return *this;
	}
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
	iterator rbegin()
	{
		return this->c.rbegin();
	}
	iterator rend()
	{
		return this->c.rend();
	}
};
