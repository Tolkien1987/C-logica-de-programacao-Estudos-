#include <iostream>
using namespace std;

//Faça um programa que leia 5 valores int, e mostre quais são pares

int main() {

  int a, b, c, d, e;
  int qtd = 0;

  cin >> a >> b >> c >> d >> e;

  if (a % 2 == 0) {
    qtd++;
  }
  if (b % 2 == 0) {
    qtd++;
  }
  if (c % 2 == 0) {
    qtd++;
  }
  if (d % 2 == 0) {
    qtd++;
  }
  if (e % 2 == 0) {
    qtd++;
  }

  cout << qtd << " valor(s) pares" << endl;

	return 0;
} 