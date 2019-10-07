# function

In C, arguments are copied by value to functions, which means that we cannot change the arguments to affect their value outside of the function. To do that, we must use pointers, which are taught later on.

Functions are defined using the following syntax:

```c
int foo(int bar) {
    /* do something */
    return bar * 2;
}

int main() {
    foo(1);
}
```

In C, functions must be first defined before they are used in the code. They can be either declared first and then implemented later on using a header file or in the beginning of the C file, or they can be implemented in the order they are used (less preferable).

The correct way to use functions is as follows:

```c
/* function declaration */
int foo(int bar);

int main() {
    /* calling foo from main */
    printf("The value of foo is %d", foo(1));
}

int foo(int bar) {
    return bar + 1;
}
```

We can also create functions that do not return a value by using the keyword void:

```c
void moo() {
    /* do something and don't return a value */
}

int main() {
    moo();
}
```

## static

static is a keyword in the C programming language. It can be used with variables and functions.

### 1.What is a static variable?

By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase their scope up to file containing them. As a result, these variables can be accessed anywhere inside a file.

Consider the following scenario – we want to count the runners participating in a race:

```c
#include<stdio.h>
int runner() {
    int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner()); //1
    printf("%d ", runner()); //1
    return 0;
}
```

We will see that count is not updated because it is removed from memory as soon as the function completes. If static is used, however:

```c
#include<stdio.h>
int runner()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner()); //1
    printf("%d ", runner()); //2
    return 0;
}
```

### 2.What is a static function?

By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to the file containing it.

The syntax looks like this:

```c
static void fun(void) {
   printf("I am a static function.");
}
```

## Static vs Global?

While static variables have scope over the file containing them making them accessible only inside a given file, global variables can be accessed outside the file too.
