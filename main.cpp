#include <iostream>
using namespace std;

//Faça um programa que mostre pares entre 1...100

int main() {
  
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      cout << i << endl;
    }
  }


	return 0;
} 