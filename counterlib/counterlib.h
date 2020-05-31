#ifndef COUNTERLIB_H__
#define COUNTERLIB_H__

class counter;

public ref class CounterLib {
  counter* counter_; // ネイティブ・コードのクラス（※ポインタ）
public:
  CounterLib();
 ~CounterLib();
 !CounterLib();
  void Increment();
  property int Value { int get(); }
};

#endif
