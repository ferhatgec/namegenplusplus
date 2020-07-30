#include <iostream>
#include "NamegenPlusPlus.hpp"

int main() {

  std::cout << "Enter a name length: " << "\n";

  int length;

  std::cin >> length;

  namegenplusplus::PrintSrg(length);

  namegenplusplus::GenerateAndSaveToFile("ExampleNames.txt", length);

  return 0;

}
