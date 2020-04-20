
#include "lib.h"
#include "template/stack.h"
#include "template/stack.cpp"

#include "lib.h"
#include "template/stack.h"


int main() {

    stack<int> intstack;
    stack<string> stringstack;

    intstack.push(100);
    cout<<intstack.top()<<endl;

    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.pop();

    return 0;
}