
#include "lib.h"
#include "template/stack.h"
#include "template/stack.cpp"

int main() {

    Stack<int> intstack;
    Stack<string> stringstack;

    intstack.push(100);
    cout<<<intstack.top()<<endl;

    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.pop();

    print_elements();

    //agregar más ejemplos de todas las funciones de Stack

    return 0;
}
