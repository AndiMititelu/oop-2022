#include "student.h"
#include <cstring>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS


void Student::set_name(const char* name)
{
	strcpy(this->name, name);
}

void Student::set_maths_grade(float grade)
{
	maths_grade = grade;
}

void Student::set_english_grade(float grade)
{
	english_grade = grade;
}

void Student::set_history_grade(float grade)
{
	history_grade = grade;
}



const char* Student::get_name() const
{
	return name;
}

float Student::get_maths_grade() const
{
	return maths_grade;
}

float Student::get_english_grade() const
{
	return english_grade;
}


float Student::get_history_grade() const
{
	return history_grade;
}




float Student::average_grade()
{
	return (maths_grade.get_maths_grade() + english_grade.get_english_grade() + history_grade.get_history_grade()) / 3.0;
}



short int compare_name(Student s1, Student s2)
{
    if (strcmp(s1.name, s2.name) == 0)
        return 0;
    else if (strcmp(s1.name, s2.name) > 0)
        return 1;
    else
        return -1;
}

short int compare_maths(Student s1, Student s2)
{
    if (s1.maths_grade == s2.maths_grade)
        return 0;
    else if (s1.maths_grade > s2.maths_grade)
        return 1;
    else
        return -1;
}


short int compare_english(Student s1, Student s2)
{
    if (s1.english_grade == s2.english_grade)
        return 0;
    else if (s1.english_grade > s2.english_grade)
        return 1;
    else
        return -1;
}

short int compare_history(Student s1, Student s2)
{
    if (s1.history_grade == s2.history_grade)
        return 0;
    else if (s1.history_grade > s2.history_grade)
        return 1;
    else
        return -1;
}

short int compare_average(Student s1, Student s2)
{
    float average1, average2;
    average1 = s1.average_grade();
    average2 = s2.average_grade();

    if (average1 == average2)
    {
        return 0;
    }
    else
    {
        if(average1 > average2)
            return 1;
        else
            return 0;
    }
        
}