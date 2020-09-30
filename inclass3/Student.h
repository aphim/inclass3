/**
 * Project OOP3200-F2020-Lesson4
 * @author Jacky Yuan
 */


#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"


class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
void Student(string first_name, string last_name, float age, string student_id);
    
string getStudentID();
    
/**
 * @param value
 */
void setStudentID(string value);
    
void studies();
    
string toString();
private: 
    string m_studentID;
};

#endif //_STUDENT_H