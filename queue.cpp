#include "queue.h"

void Queue::push(int val) {
  ++this->size;
  LinkedList::insert(0, val);
}

int Queue::peek() {
  if (this->size == 0) {
    throw "Queue is empty";
  }

  return LinkedList::get(this->size - 1);
}

int Queue::pop() {
  if (this->size == 0) {
    throw "Queue is empty";
  }

  --this->size;
  int val = this->peek();
  LinkedList::remove(this->size);
  return val;
}

Queue& Queue::operator+=(int val) {
  this->push(val);
  return *this;
}

// TODO: Queue 클래스 구현 작성