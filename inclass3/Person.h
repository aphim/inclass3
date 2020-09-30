/**
 * Project OOP3200-F2020-Lesson4
 * @author Jacky Yuan
 */


#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
void Person(string first_name, string last_name, float age);
    
float getAge();
    
/**
 * @param value
 */
void setAge(float value);
    
string getM_firstName();
    
/**
 * @param value
 */
void setM_firstName(string value);
    
string getM_lastName();
    
/**
 * @param value
 */
void setM_lastName(string value);
    
string getFirstName();
    
/**
 * @param value
 */
void setFirstName(string value);
    
string getLastName();
    
/**
 * @param value
 */
void setLastName(string value);
    
void SaysHello();
    
string toString();
private: 
    float m_age;
    string m_firstName;
    string m_lastName;
};

#endif //_PERSON_H