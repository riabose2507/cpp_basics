/*
Experimenting with headers.
To compile: g++ main.cpp calc.cpp
*/

#include <iostream>
#include <string>
#include "calc.h"

int main(){
    int add_res = add_calc::add(3, 2);
    SubCalc s;
    int sub_res = s.subtract(3, 2);
    MulCalc<float> m;
    float mul_res = m.multiply(3.3, 2.3);
    DivCalc<int> d;
    int div_res = d.divide(4, 2);
    std::cout<<"Add Result: "<<add_res<<"\n";
    std::cout<<"Sub Result: "<<sub_res<<"\n";
    std::cout<<"Mul result: "<<mul_res<<"\n";
    std::cout<<"Div result: "<<div_res<<"\n";
}