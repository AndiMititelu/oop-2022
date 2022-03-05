#include <iostream>
#include "student.h"

void main()
{
    Student s1, s2;
    s1.set_name("Bob");
    s2.set_name("Cheems");

    

    s1.set_english_grade(7.50);
    s1.set_history_grade(5);
    s1.set_maths_grade(8);

    s2.set_maths_grade(10);
    s2.set_english_grade(10);
    s2.set_history_grade(10);

    std::cout << s1.get_name() << "Averages: " << s1.average_grade << '\n';
    std::cout << s2.get_name() << "Averages: " << s2.average_grade << '\n';
}