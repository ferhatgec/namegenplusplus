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
	static std::string SensibleNamegen(int length) {
		const char* names[] = {"sophia","sanjay","jacob","jon","isabella","guido","emma","william","jayden","mehmet","emily","mia","noah","michael", "ethan",
		"chloe","aiden","daniel","elizabeth","ava","avery","benjamin","gennady","david","sofia","grace","andrew","bjarne","logan","zoey","alexis","lucas","gabriel",
		"kaylee","isaac","taylor","evan","landon","jack","alexa","fabrice","aaron","brandon","linus","steve","dough","connor","arianna","scarlett","eva", "bourne",
		"dennis","james","adam","john","anders","stephen","anders","jeff","ian","tim","brian","ken","ferhat","richard","petr","donald"};
		
		const char* surnames[] = {"smith","johnson","williams","brown","jones","rossum","watson","stone","miller","davis","torvalds","garcia","rodrigez","wilson", "ethan",
		"anderson","clarke","thomas","lee","ava","white","moore","hernandez","harris","sofia","grace","lewis","stroustrup","hall","zoey",
		"walker","perez","gabriel", "lopez","newton","edison","evan","robinson","dorsey","alexa","fabrice","eder","fischer","clark","jobs",
		"doug","connor","arianna","scarlett","eva","again","schwarz", "maier","mayr","egger","claes","nielsen", "petersen", "madsen", "ilves",
		"robert","leroy","lion","martin","hawking","meyer","weber","schulz","becker","hoffmann","samaras","koufos","kritikos","papp","jensen",
		"waage","kvaran","rossi","russo","ferrari","esposito", "bianchi","romano","emine","egzon","arben","yilmaz","demir","sahin","celik","kaya",
		"aydin","ozdemir","arslan","dogan","kilic","yildiz","ozturk","yildirim","melnyk","kovalenko","boyko","koval","moroz","petrenko","robinson","wood",
		"ritchie","gosling","gontier","john","anders","anders","bezos","ian","cook","brian","gecdogan","richard","petr","donald"}; 	
		srand(time(NULL));
  		std::string name = "";

  		int random = rand() % 2;
  		int count = 0;

  		for(int i = 0; i < length; i++) {
			if(length - 1 == i) {
      				name = name + surnames[rand() % 104];
      				count = 0;
    			} else if(random < 120 && count < 120) {
      				name = name + names[rand() % 66];
      				count++;
    			} 
			name.append(" ");
			random = rand() % 2;
  		}

 	 	return name;
	}
	
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
	
	static void PrintSrg(int len) {
		printf(namegenplusplus::SensibleNamegen(len).c_str()); printf("\n");		
	}
}

#endif // NAMEGEN_PLUS_PLUS_HPP
