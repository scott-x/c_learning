# c_learning

c is a compired language, here we use compire tool `gcc`

```
➜  ~ gcc -v
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.14.sdk/usr/include/c++/4.2.1
Apple LLVM version 10.0.1 (clang-1001.0.46.4)
Target: x86_64-apple-darwin18.7.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

### recommand books
- [learn-c](https://www.learn-c.org/en/)
- [tutorialspoint](https://www.tutorialspoint.com/index.html)
- [geeksforgeeks](https://www.geeksforgeeks.org/c-programming-language/)


### C语言5个分区

- 全局／静态存储区
- 堆:后入先出(new->delete)
- 栈：后入先出
- 自由存储区：free
- 常量存储区

### stack and heap

堆栈是一种执行“后进先出”算法的数据结构。
设想有一个直径不大、一端开口一端封闭的竹筒。有若干个写有编号的小球，小球的直径比竹筒的直径略小。现在把不同编号的小球放到竹筒里面，可以发现一种规律：先放进去的小球只能后拿出来，反之，后放进去的小球能够先拿出来。所以“先进后出”就是这种结构的特点。
堆栈就是这样一种数据结构。它是在内存中开辟一个存储区域，数据一个一个顺序地存入（也就是“压入——push”）这个区域之中。有一个地址指针总指向最后一个压入堆栈的数据所在的数据单元，存放这个地址指针的寄存器就叫做堆栈指示器。开始放入数据的单元叫做“栈底”。数据一个一个地存入，这个过程叫做“压栈”。在压栈的过程中，每有一个数据压入堆栈，就放在和前一个单元相连的后面一个单元中，堆栈指示器中的地址自动加1。读取这些数据时，按照堆栈指示器中的地址读取数据，堆栈指示器中的地址数自动减 1。这个过程叫做“弹出pop”。如此就实现了后进先出的原则。
堆栈是计算机中最常用的一种数据结构，比如函数的调用在计算机中是用堆栈实现的。
堆栈可以用数组存储，也可以用以后会介绍的链表存储。
下面是一个堆栈的结构体定义，包括一个栈顶指针，一个数据项数组。栈顶指针最开始指向-1,然后存入数据时，栈顶指针加1，取出数据后，栈顶指针减1。
```c
#define MAX_SIZE 100
typedef int DATA_TYPE;
struct stack
{
DATA_TYPE data[MAX_SIZE];
int top;
};
```
在C++中，内存分成5个区，他们分别是堆、栈、自由存储区、全局/静态存储区和常量存储区。
栈，就是那些由编译器在需要的时候分配，在不需要的时候自动清楚的变量的存储区。里面的变量通常是局部变量、函数参数等。
堆，就是那些由new分配的内存块，他们的释放编译器不去管，由我们的应用程序去控制，一般一个new就要对应一个delete。如果程序员没有释放掉，那么在程序结束后，操作系统会自动回收。
自由存储区，就是那些由malloc等分配的内存块，他和堆是十分相似的，不过它是用free来结束自己的生命的。
全局/静态存储区，全局变量和静态变量被分配到同一块内存中，在以前的C语言中，全局变量又分为初始化的和未初始化的，在C++里面没有这个区分了，他们共同占用同一块内存区。
常量存储区，这是一块比较特殊的存储区，他们里面存放的是常量，不允许修改（当然，你要通过非正当手段也可以修改，而且方法很多.