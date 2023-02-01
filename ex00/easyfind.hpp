/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:23:06 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/31 11:52:18 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
#include<array>


template <typename T>
void easyfind(T& first,int x)
{
	if (first.end() != std::find(first.begin(),first.end(),x))
	{
		std::cout<< x << " is in" << std::endl;
	}
	else
		std::cout<<"NOT FOUND" << std::endl;
}