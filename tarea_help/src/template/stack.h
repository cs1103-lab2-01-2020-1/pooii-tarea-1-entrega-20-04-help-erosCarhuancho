//
// Author: marvin on 4/19/20.
//

#ifndef STACK_H
#define STACK_H

#include "../lib.h"

template <class T>
class Stack { 
   private: 
      vector<T> vec;    // elements 

   public: 
      

      bool empty() const ;

      void push(T const&);  

      T top() const; 

      void pop();  

      int size();
}; 



#endif //STACK_H
