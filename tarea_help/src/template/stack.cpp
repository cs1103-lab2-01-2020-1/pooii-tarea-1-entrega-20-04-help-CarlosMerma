

#include "stack.h"
using namespace std;

template <class T>
void Stack<T>::push (T const& elem){
    elements.push_back(elem);
}

template <class T>
void Stack<T> ::pop(){
    elements.pop_back();
}

template <class T>
T const& Stack<T>:: top() const {
    return elements.back();
    }

template <class T>
bool empty(){
    vector<T> elements;
    return elements.empty();

}

template <class T>
void Stack<T>::print_elements(ostream& os){
   cout<<elements;
}

template <class T>
ostream& operator<<(ostream& os, Stack<T> const& s){
    os<<s.elements;
    return os;
}


