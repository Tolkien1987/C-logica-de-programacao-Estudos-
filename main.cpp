//_ _ _ Exercises C++ _ _ _ //

// 003 - Problema "menor_de_tres"
// Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez.

#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int a, b , c, lower;

  cout << "Please, type the 1st number" << endl;
  cin >> a;
  cout << "Please, type the 2st number" << endl;
  cin >> b;
  cout << "Please, type the 3st number" << endl;
  cin >> c;

  if (a < b && a < c) { 
    lower = a;
  } else if (b < c) {
    lower = b;
  } else {
    lower = c;
  }
  cout << "The lower number is " << lower << endl;

	return 0;
}




// _ _ _ _ _ _ //




// 002 - Problema "idades"
// Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  
//   string name1, name2;
//   int age1, age2;
//   double average;

//   cout << "Please, type the first name: " << endl;
//   getline(cin, name1); // ler até a quebra de linha
//   cout << "Please, type the second name: " << endl;
//   getline(cin, name2);
//   cout << "Please, type the first age: " << endl;
//   cin >> age1;
//   cout << "Please, type the second age: " << endl;
//   cin >> age2;

//   average = (double)(age1 + age2) / 2;
//   cout << "The average age is " << average << endl;
  

// 	return 0;
// }




// _ _ _ _ _ _ //



// 001 - Problema "retangulo"
// Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  
//   double base, height, area, perimeter, diagonal;

//   cout << "Type the base value: ";
//   cin >> base;
//   cout << "type the height value: ";
//   cin >> height;

//   area = base * height;
//   perimeter = 2 * (base + height);
//   diagonal = sqrt(pow(base, 2.0) + pow(height, 2.0)); //altura ao quadrado

//   cout << fixed << setprecision(4);
//   cout << "Area = " << area << endl;
//   cout << "Perimeter = " << perimeter << endl;
//   cout << "Diagonal = " << diagonal << endl;
  

// 	return 0;
// }




// _ _ _ _ _ _ //





// #include <bits/stdc++.h>
// using namespace std;


// int main() {
  
//   int income1, income2;
//   string name1, name2;
//   int age;
//   char gender;

//   cout << "Name of the first person: ";
//   getline(cin,name1);
//   cout << "Income of the first person: ";
//   cin >> income1;
  
//   cout << "Name of the second person: ";
//   cin.ignore(INT_MAX, '\n');
//   getline(cin,name2);
//   cout << "Income of the second person: ";
//   cin >> income2;

//   cout << "Type your age: ";
//   cin >> age;
//   cout << "Type your gender (F/M): ";
//   cin >> gender;

//   cout << fixed << setprecision(2);
//   cout << "Name 1 = " << name1 << endl; 
//   cout << "Income 1 = " << income1 << endl; 
//   cout << "Name 2 = " << name2 << endl; 
//   cout << "Income 2 = " << income2 << endl; 
//   cout << "Age:  " << age << endl;
//   cout << "Gender: " << gender << endl;

// 	return 0;
// }



// // _ _ _ _ _ _ //



//_ _ _ _General approach_ _ _ //

// #include <bits/stdc++.h> // biblioteca universal
// using namespace std;


// int main() {
  
//   int age = 10;
//   double income = 25.700, height = 1.75;
//   char gender = 'F';
//   string name = "Paty";

//   cout << fixed << setprecision(2);
//   cout << "Age = " << age << endl;
//   cout << "Income = " << income << endl;
//   cout << "Height = " << height << endl;
//   cout << "Gender = " << gender << endl;
//   cout << "Name = " << name << endl;

// 	return 0;
// } 



// _ _ _ other exercises_ _ _ _ //



// #include <iostream>
// #include <iomanip>
// using namespace std;

// //Lista pessoal de exercícios com C++ 

// void printValue(float newIncome, float readjustment, int percent) {
//   cout << fixed << setprecision(2);
//   cout << "New income " << newIncome << endl;
//   cout << "Readjustment " << readjustment << endl;
//   cout << "Percent " << percent << " %" << endl;
// }

// int main() {
//     float value;
//     cin >> value;

//     if (value >= 0 && value <= 400.00) {
//         printValue(value * 1.15, value * 0.15, 15);

//     } else if (value >= 400.01 && value <= 800.00) {
//         printValue(value * 1.12, value * 0.12, 12);
//     } else if (value >= 800.01 && value <= 1200.00) {
//         printValue(value * 1.10, value * 0.10, 10);
//     } else if (value >= 1200.01 && value <= 2200.00) {
//         printValue(value * 1.07, value * 0.07, 7);
//     } else if (value > 2000.00) {
//         printValue(value * 1.04, value * 0.04, 4);
//     }

// 	return 0;
// } 



// _ _ _ _ _ _ _



// #include <iostream>
// using namespace std;
 
// int main() {
//     cout << "\n\n Print the sum of two numbers :\n";
// 	  cout << "-----------------------------------\n";
// 	  int a;
// 	  int b;
// 	  int sum;
// 	  a=29;
// 	  b=30;
// 	  sum=a+b;
// 	  cout << " The sum of "<< a << " and "<<b <<" is : "<< sum <<"\n\n" ;
// }



// - - - - - - //


// int main() {

//   bool verdadeiro = 12 < 13 || 10 <= 9;
//   cout << "verdadeiro = " << verdadeiro << endl;
//   int myAge = 20;
//   int mySisterAgo = 33;

//   if (myAge <= mySisterAgo) { 
//     cout << "I am younger" << endl;
//   }

// 	return 0;
//}


// - - - - - - - - //



// #include <iostream>
// using namespace std;

// //Faça um programa que leia 5 valores int, e mostre quais são pares

// int main() {

//   int myAge = 20;
//   int mySisterAgo = 33;

//   if (myAge <= mySisterAgo) { 
//     cout << "I am younger" << endl;
//   int a, b, c, d, e;
//   int qtd = 0;

//   cin >> a >> b >> c >> d >> e;

//   if (a % 2 == 0) {
//     qtd++;
//   }
//   if (b % 2 == 0) {
//     qtd++;
//   }
//   if (c % 2 == 0) {
//     qtd++;
//   }

//   if (d % 2 == 0) {
//     qtd++;
//   }
//   if (e % 2 == 0) {
//     qtd++;
//   }

//   cout << qtd << " valor(s) pares" << endl;

// 	return 0;
// } 



// - - - - - - //



// #include <iostream>
// using namespace std;

// //Faça um programa que leia 5 valores int, e mostre quais são pares
// //Faça um programa que mostre pares entre 1...100

// int main() {

//   int a, b, c, d, e;
//   int qtd = 0;

//   cin >> a >> b >> c >> d >> e;

//   if (a % 2 == 0) {
//     qtd++;
//   }
//   if (b % 2 == 0) {
//     qtd++;
//   }
//   if (c % 2 == 0) {
//     qtd++;
//   }
//   if (d % 2 == 0) {
//     qtd++;
//   }
//   if (e % 2 == 0) {
//     qtd++;

//   for (int i = 1; i <= 100; i++) {
//     if (i % 2 == 0) {
//       cout << i << endl;
//     }
//   }

//   cout << qtd << " valor(s) pares" << endl;

// 	return 0;
// }  



// - - - - - //



// int main() {

//   for (int i = 1; i <= 100; i++) {
//     if (i % 2 == 0) {
//   for (int i = 2; i <= 100; i+=2) {   
//       cout << i << endl;
//     }
//   }

// 	return 0;
// }  



// - - - -  //




// int main() {

//   for (int i = 2; i <= 100; i+=2) {   
//       cout << i << endl;
//     }

//   int i = 2;

//   while ( i <= 100) {
//     cout << i << endl;
//     i += 2;
//   }

// 	return 0;
// }  