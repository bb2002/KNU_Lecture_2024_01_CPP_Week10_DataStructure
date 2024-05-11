#include "queue.h"

void Queue::push(int val) {
  LinkedList::insert(this->size++, val);
}

int Queue::peek() {
  if (this->size == 0) {
    throw "Queue is empty";
  }

  return LinkedList::get(0);
}

int Queue::pop() {
  if (this->size == 0) {
    throw "Queue is empty";
  }

  int val = this->peek();
  LinkedList::remove(0);
  return val;
}

Queue& Queue::operator+=(int val) {
  this->push(val);
  return *this;
}