/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
#*/

#ifndef NAMEGEN_PLUS_PLUS_HPP
#define NAMEGEN_PLUS_PLUS_HPP

#include <iostream>
#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>
#include <fstream>

// TODO: Parse different regions.

namespace namegenplusplus {
	static std::string SensibleNamegen(int length) {
		const char* names[] = {"Sophia","Sanjay","Jacob","Jon","Isabella","Guido","Emma","William","Jayden","Mehmet","Emily","Mia","Noah","Michael", "Ethan",
		"Chloe","Aiden","Daniel","Elizabeth","Ava","Avery","Benjamin","Gennady","David","Sofia","Grace","Andrew","Bjarne","Logan","Zoey","Alexis","Lucas","Gabriel",
		"Kaylee","Isaac","Taylor","Evan","Landon","Jack","Alexa","Fabrice","Aaron","Brandon","Linus","Steve","Dough","Connor","Arianna","Scarlett","Eva", "bourne",
		"Dennis","James","Adam","John","Anders","Stephen","Jeff","Ian","Tim","Brian","Ken","Ferhat","Richard","Petr","Donald"};
		
		const char* surnames[] = {"Smith","Johnson","Williams","Brown","Jones","Rossum","Watson","Stone","Miller","Davis","Torvalds","Garcia","Rodrigez","Wilson", "Ethan",
		"Anderson","Clarke","Thomas","Lee","Ava","White","Moore","Hernandez","Harris","Sofia","Grace","Lewis","Stroustrup","Hall","Zoey",
		"Walker","Perez","Gabriel", "Lopez","Newton","Edison","Evan","Robinson","Dorsey","Alexa","Fabrice","Eder","Fischer","Clark","Jobs",
		"Doug","Connor","Arianna","Scarlett","Eva","Again","Schwarz", "Maier","Mayr","Egger","Claes","Nielsen","Petersen","Madsen","Ilves",
		"Robert","Leroy","Lion","Martin","Hawking","Meyer","Weber","Schulz","Becker","Hoffmann","Samaras","koufos","Kritikos","Papp","Jensen",
		"Waage","Kvaran","Rossi","Russo","Ferrari","Esposito", "Bianchi","Romano","Emine","Egzon","Arben","Yilmaz","Demir","Sahin","Celik","Kaya",
		"Aydin","Ozdemir","Arslan","Dogan","Kilic","Yildiz","Ozturk","Yildirim","Melnyk","Kovalenko","Boyko","Koval","Moroz","Petrenko","Robinson","Wood",
		"Ritchie","Gosling","Gontier","John","Anders","Bezos","Ian","Cook","Brian","Gecdogan","Richard","Petr","Donald"}; 	
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
	static void GenerateAndSaveToFile(std::string fileNameAndExtension, int amountOfNames){

			std::ofstream outputFile(fileNameAndExtension);
			std::vector<std::string> Vec;
			Vec.push_back(namegenplusplus::SensibleNamegen(amountOfNames));
			for(auto x : Vec){


				outputFile<<x<<std::endl;

				
			}
			outputFile.eof();


	}
}

#endif // NAMEGEN_PLUS_PLUS_HPP
