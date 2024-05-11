#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList() {
  this->head_ = nullptr;
  this->size_ = 0;
}

LinkedList::~LinkedList() {
  Node* current = this->head_;
  Node* removed = nullptr;
  while (true) {
    if (current == nullptr) {
      break;
    }
    
    removed = current;
    current = current->next_;
    delete removed;
  }
}

void LinkedList::print() {
  for (Node* p = this->head_; p != nullptr; p = p->next_) {
    std::cout << p->value_;
    if (p->next_ != nullptr) {
      std::cout << " ";
    }
  }

  std::cout << std::endl;
}

void LinkedList::insert(int index, int value) {
  auto node = new Node(value);

  if (index == 0) {
    node->next_ = this->head_;
    this->head_ = node;
  } else {
    Node* before = this->head_;
    for (int i = 1; i < index; ++i) {
      if (before == nullptr) {
        throw "Index out of range";
      }
      before = before->next_;
    }

    node->next_ = before->next_;
    before->next_ = node;
  }
}

int LinkedList::get(int index) {
  Node* current = this->head_;
  for (int i = 0; i < index; ++i) {
    if (current == nullptr) {
      throw "Index out of range";
    }

    current = current->next_;
  }

  return current->value_;
}

void LinkedList::remove(int index) {
  if (this->head_ == nullptr) {
    throw "List is empty";
  }

  if (index == 0) {
    Node* removed = this->head_;
    this->head_ = removed->next_;
    delete removed;
  } else {
    Node* before = this->head_;
    for (int i = 1; i < index; ++i) {
      if (before == nullptr) {
      throw "Index out of range";
    }

      before = before->next_;
    }

    Node* removed = before->next_;
    before->next_ = removed->next_;
    delete removed;
  }
}