#include <iostream>
#include <iomanip>
using namespace std;

void printValue(float newIncome, float readjustment, int percent) {
  cout << fixed << setprecision(2);
  cout << "New income " << newIncome << endl;
  cout << "Readjustment " << readjustment << endl;
  cout << "Percent " << percent << " %" << endl;
}

int main() {
    float value;
    cin >> value;

    if (value >= 0 && value <= 400.00) {
        printValue(value * 1.15, value * 0.15, 15);

    } else if (value >= 400.01 && value <= 800.00) {
        printValue(value * 1.12, value * 0.12, 12);
    } else if (value >= 800.01 && value <= 1200.00) {
        printValue(value * 1.10, value * 0.10, 10);
    } else if (value >= 1200.01 && value <= 2200.00) {
        printValue(value * 1.07, value * 0.07, 7);
    } else if (value > 2000.00) {
        printValue(value * 1.04, value * 0.04, 4);
    }

	return 0;
} 