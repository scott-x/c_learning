# Dynamic allocation

Dynamic allocation of memory is a very important subject in C. It allows building complex data structures such as linked lists. Allocating memory dynamically helps us to store data without initially knowing the size of the data in the time we wrote the program.

To allocate a chunk of memory dynamically, we have to have a pointer ready to store the location of the newly allocated memory. We can access memory that was allocated to us using that same pointer, and we can use that pointer to free the memory again, once we have finished using it.

Let's assume we want to dynamically allocate a person structure. The person is defined like this:
```c
typedef struct {
    char * name;
    int age;
} person;
```

To allocate a new person in the myperson argument, we use the following syntax:
```c
person * myperson = malloc(sizeof(person));
```
This tells the compiler that we want to dynamically allocate just enough to hold a person struct in memory, and then return a pointer to the newly allocated data.

Note that sizeof is not an actual function, because the compiler interprets it and translates it to the actual memory size of the person struct.

To access the person's members, we can use the -> notation:
```c
myperson->name = "John";
myperson->age = 27;
```
After we are done using the dynamically allocated struct, we can release it using free:
```c
free(myperson);
```
**Note that the free does not delete the myperson variable itself, it simply releases the data that it points to**. The myperson variable will still point to somewhere in the memory - but after calling myperson we are not allowed to access that area anymore. We must not use that pointer again until we allocate new data using it.

### Exercise

Use malloc to dynamically allocate a point structure.

### [c语言动态数组](http://www.runoob.com/w3cnote/c-dynamic-array.html)

分配原则：从外到内

释放原则：从内到外