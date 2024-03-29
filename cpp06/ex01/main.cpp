/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 00:00:48 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/29 01:25:40 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
    data.name = "UN35";
	uintptr_t serial = Serializer::serialize(&data);
	std::cout << "Data serial number: " << serial << std::endl;
 
	Data* obj = Serializer::deserialize(serial);
	std::cout << "Object name: " << obj->name << std::endl;

	return 0;
}