#include <iostream>
#include <typeinfo>
#include "include/changer.h"

int main(){
  std::string text;
  std::cout << "Enter text\n";
  std::getline(std::cin, text);
  int n;
  if (typeid(n) != typeid(int)) {
    std::cout << "Incorrect type of n";
  } else {
    std::cout << "Enter num\n";
    std::cin >> n;
  }
  char oldValue;
  char newValue;
  std::cout << "Enter the oldValue\n";
  std::cin >> oldValue;
  std::cout << "Enter the newValue\n";
  std::cin >> newValue;
  std::cout << "Result: " << changer(text, n, oldValue, newValue);
}
