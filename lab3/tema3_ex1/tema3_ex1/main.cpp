#include <iostream>
#include "Math.h"
using namespace std;

void main()
{
    int a = 23, b = 4, c = 11;
    double x = 10.5, y = 2.2, z = 20.5;
    char* ptr = "123", 
    char* ptr2 = "456";
    cout << Math::Add(a, b) << "\n";
    cout << Math::Add(a, b, c) << "\n";
    cout << Math::Add(x, y) << "\n";
    cout << Math::Add(x, y, z) << "\n";
    cout << Math::Mul(a, b) << "\n";
    cout << Math::Mul(a, b, c) << "\n";
    cout << Math::Mul(x, y) << "\n";
    cout << Math::Mul(x, y, z) << "\n";
    cout << Math::Add(3, a, b, c) << "\n";
    cout << Math::Add(ptr, ptr2) << "\n";
    
}
