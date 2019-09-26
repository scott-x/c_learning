# header
C中的header用于定义接口

### 语法

```c
#ifndef SQUARE_H
//personal function implemention
#define SQUARE_H
#endif
```

### 注意

case1 OK

case2中的这种定义（c++）是不行的，会报错

```
Undefined symbols for architecture x86_64:
  "_square", referenced from:
      _main in main-a8392b.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```