#include <iostream>
#include "NumberList.h"

void main()
{
    NumberList l1;
    l1.Init();
    l1.Add(12);
    l1.Add(2);
    l1.Add(23);
    l1.Add(420);
    l1.Add(31);
    l1.Print();
    l1.Sort();
    l1.Print();
}