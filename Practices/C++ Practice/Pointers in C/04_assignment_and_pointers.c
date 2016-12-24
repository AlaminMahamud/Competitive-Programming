// Now, how do you assign an int to this pointer? 
// this solution might be obvious
foo_ptr = 42;

// No it's wrong;

// we first declared it 
int *foo_ptr;

// we can create another int
int foo;

// assign foo
foo = 42;

// assign foo_ptr the address of foo
foo_ptr=&foo;

// Now it is pointing to foo.

// Any direct assignment to a pointer variable will change the address in the variable, not the value
// at that address.
// In this example, the new value of foo_ptr [that is the new pointer in that variable]
// is 42.
// But we don't know that this points to anything. so it probably doesn't. 
// trying to access this address will probably result in a segmentation violation. [read:crash]

// incidently, compilers usually warn  when you try to assign an int to a pointer variable.
// gcc will say "warning: initialization makes pointer from integer without a cast"

// To access the value of pointers you must dereference it..