#include "stack.h"

template <typename T>
void stack<T>::push (T const& item) {
    elements.push_back(item);
}

template <class T>
void stack<T>::pop () {
    elements.pop_back();
}

template <class T>
bool empty(){
    vector<T> elements;
    return elements.empty();
}

template <class T>
T stack<T>::top () const {
    return elements.back();
}



template <typename T>
ostream& operator<<(ostream& os, stack<T> const& s){
    os << s.itements;
    return os;
}