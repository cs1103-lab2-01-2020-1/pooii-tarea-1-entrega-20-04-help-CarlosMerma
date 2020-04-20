
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
    intstack.push(500);
    cout<<intstack.top()<<endl;
    intstack.pop();
    cout<<intstack.top()<<endl;
    


    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.push("La mejor universidad");
    cout<<stringstack.top()<<endl;
    stringstack.pop();
    cout<<stringstack.top()<<endl;


    return 0;
}