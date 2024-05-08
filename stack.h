#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

class Stack : public LinkedList {
  public:
  Stack() : LinkedList() {}

  public:
  void push(int value);
  int peek();
  int pop();

  public:
  Stack& operator+=(int val);
};

#endif