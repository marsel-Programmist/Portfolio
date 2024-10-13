#include <iostream>

int main() {
  setlocale(LC_ALL, "RU");
  int num;
  std::cout << "Загадай число от 1 до 10:\n";
  std::cin >> num;
  switch(num) {
    case 1: std::cout << "Число равно 1!"; break;
    case 2: std::cout << "Число равно 2!"; break;
    case 3: std::cout << "Число равно 3!"; break;
    case 4: std::cout << "Число равно 4!"; break;
    case 5: std::cout << "Число равно 5!"; break;
    case 6: std::cout << "Число равно 6!"; break;
    case 7: std::cout << "Число равно 7!"; break;
    case 8: std::cout << "Число равно 8!"; break;
    case 9: std::cout << "Число равно 9!"; break;
    case 10: std::cout << "Число равно 10!"; break;
    default: std::cout << "Я сказал 10!"; break;
    
  }
  
  return 0;
}
