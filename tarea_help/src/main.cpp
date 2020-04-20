//
// Author: marvin on 4/19/20.
//
#include "lib.h"

int main() {

    Stack<int> intstack;
    Stack<string> stringstack;

    intstack.push(100);
    cout<<intstack.top()<<endl;

    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.pop();
    

    
Stack<int> a;

  a.push(5);
  a.push(7);
  a.push(6);
  a.push(4);
  a.push(32);
  cout<<a.size()<<endl;
  cout<<a.top()<<endl;
  a.pop();
  cout<<a.top()<<endl;
  cout<<a.empty()<<endl;

    return 0;
}
