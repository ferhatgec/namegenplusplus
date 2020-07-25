/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef NAMEGEN_PLUS_PLUS_HPP
#define NAMEGEN_PLUS_PLUS_HPP

#include <iostream>
#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>

// TODO: Add sensible names generator.
// TODO: Parse different regions.

namespace namegenplusplus {
	static std::string Namegen(int length) {
		char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
  		char vowels[] = {'a','e','i','o','u','y'};
  		srand(time(NULL));
  		std::string name = "";

  		int random = rand() % 2;
  		int count = 0;

  		for(int i = 0; i < length; i++) {
    			if(random < 2 && count < 2) {
      				name = name + consonents[rand() % 19];
      				count++;
    			} else {
      				name = name + vowels[rand() % 5];
      				count = 0;
    			}

    			random = rand() % 2;
  		}

 	 return name;
	}
  	
	static void PrintRg(int len) {
		printf(namegenplusplus::Namegen(len).c_str()); printf("\n");		
	}
}

#endif // NAMEGEN_PLUS_PLUS_HPP
