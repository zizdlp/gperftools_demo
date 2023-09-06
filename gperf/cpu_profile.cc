#include <gperftools/profiler.h>
#include <stdlib.h>

void f1() { 
  for (int i = 0; i < 1000;++i){
    int m = 0;
    for (int j = 0; j < 10000; ++j) {
      m += i * j + 1;
    }
  }
}
void f2() { 
  for (int i = 0; i < 10000;++i){
    int m = 0;
    for (int j = 0; j < 10000; ++j) {
      m += i * j + 1;
    }
  }
}
void f() { 
  f1();
  f2();
}
int main() {
  ProfilerStart("./output/cpu_profile.prof");//开启性能分析
  f();
  ProfilerStop();//停止性能分析
  return 0;
}
