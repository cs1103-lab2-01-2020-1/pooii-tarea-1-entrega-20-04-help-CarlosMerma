#ifndef Pila_H
#define Pila_H

#include "../lib.h"

template <typename T>
class stack {
private:
    vector<T> elements;

public:
    //add copy constructor+
    //add assignment constructor
    void push(T const& item);
    void pop();
    T top() const;
    bool empty();
    //overload == operator
    void print_elements(ostream& os);

    friend ostream& operator<<(ostream& os, stack<T> const& s);

};

template <typename T>
ostream& operator<<(ostream& os, stack<T> const& s);

#endif //Pila_H

