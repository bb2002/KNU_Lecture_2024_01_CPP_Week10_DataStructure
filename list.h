#ifndef LIST_H
#define LIST_H
#include "linked_list.h"

class List : public LinkedList {
  public:
  List() : LinkedList() {}

  public:
  void insert(int, int);

  int get(int);

  void remove(int);
};

#endif