#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;


void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
double Serednie(int* r, const int size, double k, double b) {
    double z = 0;
    double n = 0;
    for (int i = 0; i < size; i++) {
        if (r[i] > k) {
            n = i;
            k = r[i];
        }
    }
    b = r[0];
    for (int i = 0; i < size; i++) {
        if (r[i] < b) {
            z = i;
            b = r[i];
        }
    }
    return (n + z)/2;
}
void Print(int* r, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << r[i] << " ";
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    int Low = 1;
    int Higt = 30;
    const int n = 10;
    int r[n];

    Create(r, n, Low, Higt);
    Print(r, n);
    cout << "Serednie: " << Serednie(r, n, 0, 0) << endl;

    return 0;
}