//
// Author: marvin on 4/19/20.
//

#include "stack.h"
template <class T>
bool Stack<T>::empty() const 
{      
  return vec.empty(); 
} 

template <class T>
void Stack<T>::push (T const& elem) 
{ 
   vec.push_back(elem);    
} 

template <class T>
T Stack<T>::top () const 
{  
  return vec.back();      
} 


template <class T>
void Stack<T>::pop () { 
    vec.pop_back();         
} 


template <class T>
int Stack<T>::size()
{
  return vec.size();
}




