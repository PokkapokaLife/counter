#include "counterlib.h"
#include "counter.h"

CounterLib::CounterLib() { 
  counter_ = new counter(); // ネイティブ・オブジェクト生成
}

CounterLib::~CounterLib() { 
  this->!CounterLib(); // ファイナライザを呼ぶ
}

CounterLib::!CounterLib() { 
  delete counter_; // ネイティブ・オブジェクト解放
}

void CounterLib::Increment() {
  counter_->increment(); 
}

int CounterLib::Value::get() {
  return counter_->value();
}
