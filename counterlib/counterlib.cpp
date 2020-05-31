#include "counterlib.h"
#include "counter.h"

CounterLib::CounterLib() { 
  counter_ = new counter(); // �l�C�e�B�u�E�I�u�W�F�N�g����
}

CounterLib::~CounterLib() { 
  this->!CounterLib(); // �t�@�C�i���C�U���Ă�
}

CounterLib::!CounterLib() { 
  delete counter_; // �l�C�e�B�u�E�I�u�W�F�N�g���
}

void CounterLib::Increment() {
  counter_->increment(); 
}

int CounterLib::Value::get() {
  return counter_->value();
}
