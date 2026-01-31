#include <iostream> #include <cstdlib> using namespace std;
int main() {     int numbers[20], even[20], odd[20];     int eCount = 0, oCount = 0;
    for (int i = 0; i < 20; i++) {         numbers[i] = rand() % 101;         if (numbers[i] % 2 == 0)             even[eCount++] = numbers[i];         else             odd[oCount++] = numbers[i];     }
    cout << "Even Numbers:" << endl;     for (int i = 0; i < eCount; i++)         cout << even[i] << " ";
    cout << endl << "Odd Numbers:" << endl;     for (int i = 0; i < oCount; i++)         cout << odd[i] << " ";
    return 0;
}
