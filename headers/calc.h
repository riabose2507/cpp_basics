#ifndef CALC_H
#define CALC_H

// Namespace for addition

namespace add_calc { 
int add(int param1, int param2);
}

// Normal class for subtraction

class SubCalc{
    public:
        int subtract(int op1, int op2);
};


// Template class implemented in header for multiplication
template <class T>
class MulCalc{
    public:
        T multiply(T op1, T op2);
};

template <class T>
T MulCalc<T>::multiply(T op1, T op2){
    T res = op1*op2;
    return res;
}

// Template class implemented in template file

template <class M>
class DivCalc{
    public:
        M divide(M op1, M op2);
};

#include "calc_div.tpp"
#endif