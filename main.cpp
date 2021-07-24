/*
This is a starter file.
*/

#include <iostream>
#include <string>

// Template functions

template <class T>
T add(T param1, T param2){
    T result = param1 + param2;
    return result;
}

// Employee Class and Functions

class Employee{
    std::string name;
    int age;
    public: 
        Employee(std::string name, int age);
        std::string getName();
        int addAge(int years);
};

Employee::Employee(std::string name, int age){
    this->name = name;
    this->age = age;
}

std::string Employee::getName(){
    return this->name;
}

int Employee::addAge(int years){
    int finalYears = this->age + years;
    return finalYears;
}

// Calc class and its functions 

template <class M>
class Calc{
    public:
        void display(int a);
        M multiply(M a, M b);
};

template <class M>
void Calc<M>::display(int a){
    std::cout<<a;
}

template <class M>
M Calc<M>::multiply(M a, M b){
    M res = a * b;
    return res;
}

// Main function

int main(){
    int res = add<int>(2,3);
    Employee emp("Ria", 25);
    std::string name = emp.getName();
    std::string res_str = std::to_string(res);
    std::cout<<"Hello "<<name<<" "<<res_str<<"\n";
    Calc<float> c;
    float mul_res = c.multiply(3.0,2.5);
    std::cout<<mul_res;
}