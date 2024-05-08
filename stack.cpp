#include "stack.h"

void Stack::push(int value) {
  LinkedList::insert(0, value);
}

int Stack::peek() {
  return LinkedList::get(0);
}

int Stack::pop() {
  int value = this->peek();
  LinkedList::remove(0);
  return value;
}

Stack& Stack::operator+=(int val) {
  this->push(val);
  return *this;
}