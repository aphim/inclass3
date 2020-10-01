// inclass3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Jacky Yuan
//Program: Inclass3.cpp

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"

int main()
{
    Person person =Person("Bob", "Smith", 35.6f);
    person.SaysHello();
    std::cout << person.ToString() << std::endl;

    Student student = Student("Mike", "Jones", 22.0f, "MJ123456789");
    student.SaysHello();
    student.Studies();
    std::cout << student.ToString() << std::endl;


    Professor professor = Professor("Andrew", "Hogue", 38.0f, "AH123245367589");
    professor.SaysHello();
    professor.Teaches();
    std::cout << professor.ToString() << std::endl;

 }


