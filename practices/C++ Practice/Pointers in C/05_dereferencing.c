// as by referencing we were saving a shortcut to a variable
// so by dereferencing we are using that shortcut to access it.

int bar = *foo_ptr;


// in this declaration, the dereference operator [prefix *, not to be confused with the multiplication operator] looks up the value that exist at an address.[this is called a load operation]
// it's also possible to write to a dereference expression. 
// the c way of saying this: lvalue

*foo_ptr = 42;
// this is called a store operation