#ifndef QUEUE_H
#define QUEUE_H
#include "linked_list.h"

class Queue : public LinkedList {
  private:
  int size = 0;

  public:
  Queue() : LinkedList() {};

  public:
  void push(int);
  int peek();
  int pop();

  public:
  Queue& operator+=(int);
};

#endif