

#ifndef STACK_H
#define STACK_H

#include "../lib.h"

template <typename T>

class Stack {
private:
    vector<T> elements;

public:
    //add copy constructor
    Stack(const vector<T> &elements) : elements(elements) {

    }
    //add assignment constructor

    void push(T const& elem);
    void pop();
    T const& top() const;
    bool empty();

    //overload == operator
    bool operator==(const Stack &rhs) const {
        return elements == rhs.elements;
    }

    void print_elements(ostream& os);
    friend ostream& operator<<(ostream& os, Stack<T> const& s);

};


#endif //STACK_H
