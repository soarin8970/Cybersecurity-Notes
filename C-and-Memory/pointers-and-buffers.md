Memory Basics: Buffers and Pointers

1. What is a buffer?

A buffer is simply a region of memory used to temporarily store data.

For example:

char buffer[10];

This creates space for 10 characters (10 bytes).

I can visualize it as 10 boxes:


buffer[0] is the first byte, buffer[1] is the second byte, etc.

A buffer has a capacity and may contain less actual data than its full capacity.

2. Memory addresses

Every location in memory has an address. 

For example:

Address Value

1000      50

If a variable x is stored at address 1000:

int x = 50;

then value of x is 50 and &x is the address of x that is 1000

3. & means "address of"

&x means: Give me the memory address of x. So if x is stored at address 1000: x = 50 and &x = 1000

4. Pointers

A pointer is a variable that stores a memory address.

int x = 50;
int *p = &x;

Here:

the value of x is 50 and the address of x is p. It contains the address where 50 is stored.

5. * means "follow the pointer"

Once p contains the address of x:

*p means Go to the address stored in p and get the value there. Therefore

int x = 50;
int *p = &x;

*p gives 50

* can also change the value

*p = 75;

Since p points to x, this changes x:

x = 75

So: 

p is the address of x

*p is the value at that address

A useful way to remember it:

&x - Where is x?

p - I contain that address

*p - Go to that address

6. * has two uses

When declaring a pointer:

int *p;

the * means:

p is a pointer to an integer.

When using the pointer:

*p

the * means follow the pointer and access the value it points to.

7. Pointer arithmetic

If:
 
char buffer[20];
char *p = buffer;

then p points to the beginning of the buffer.

p + 5 means: Move 5 elements forward from where p currently points.

Because char is one byte:

p - buffer[0]
p+1 - buffer[1]
p+2 - buffer[2]
p+3 - buffer[3]
p+4 - buffer[4]
p+4 - buffer[5]

Important:

p+5 does not mean add 5 to the data stored in the buffer.

It means move the pointer 5 positions.

8. Structures and .

A structure can contain several related pieces of data:

struct Person {
	int age;
	int height;
};

If I have:

struct Person person;

I can access its fields using .:

person.age
person.height

The . means: Access a field directly inside the structure.

9. -> means access a structure through a pointer

If I have a pointer to the structure:

struct Person *p = &person;

then I use: p->age instead of p.age

p->age means: Follow p to the structure, then access its age field.

It is essentially a shorthand for (*p).age. So in person.age, person is the structure itself and in p->age, p is a pointer to the structure.

10. Quick reference

&x - address of x
p - address stored in pointer p
*p - value at the address stored in p
person.field - accesses a field directly from a structure
p->field - follow pointer p and access a field in the structure


