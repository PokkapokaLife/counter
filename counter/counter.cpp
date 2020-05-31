#include "counter.h"

counter::counter() : value_(0) {
}

void counter::increment() {
  ++value_;
}

int counter::value() const { 
  return value_; 
}
