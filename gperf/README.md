# 



```shell
gcc main.cc -lprofiler -o leak_test
./leak_test
pprof --svg leak_test test.prof  > ans.svg
```
