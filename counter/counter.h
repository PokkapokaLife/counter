#ifndef COUNTER_H__
#define COUNTER_H__

class counter {
private:
  int value_;
public:
  counter();
  void increment();
  int value() const;
};

#endif
