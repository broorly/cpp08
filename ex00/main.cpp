/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:22:40 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/31 18:56:57 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
int main()
{
	std::vector<int> v;
	
	v.push_back(1);
	v.push_back(5);
	v.push_back(8);
	v.push_back(577);
	v.push_back(9);
	v.push_back(6);
	v.push_back(3);
	v.push_back(5);
	easyfind(v,8);
}