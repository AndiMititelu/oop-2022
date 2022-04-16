#include <iostream>
#include "Vector.h"

int main()
{
    //Mai am de rezolvat partile cu fct callback
    
    Vector <int> v;
    v.push(11);
    v.push(23);
    v.push(7);
    v.push(1);
    v.push(2);
    v.insert(2, 30);
    v.print();
    std::cout << '\n';
    std::cout << v.pop() << '\n';
    int k = v.Count();
    std::cout << v.get(23) << '\n';
    std::cout << k << '\n';
    v.print();
    std::cout << '\n';

}