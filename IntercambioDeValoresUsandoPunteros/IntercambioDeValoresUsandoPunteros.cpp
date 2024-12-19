#include <iostream>
using namespace std;
void swap(int* a, int* b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int x = 5, y = 10;
cout << "Antes del intercambio: x = " << x << ", y = " << y << endl;
swap(&x, &y);
cout << "Después del intercambio: x = " << x << ", y = " << y << endl;
return 0;
}
