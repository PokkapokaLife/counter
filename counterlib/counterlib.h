#ifndef COUNTERLIB_H__
#define COUNTERLIB_H__

class counter;

public ref class CounterLib {
  counter* counter_; // �l�C�e�B�u�E�R�[�h�̃N���X�i���|�C���^�j
public:
  CounterLib();
 ~CounterLib();
 !CounterLib();
  void Increment();
  property int Value { int get(); }
};

#endif
