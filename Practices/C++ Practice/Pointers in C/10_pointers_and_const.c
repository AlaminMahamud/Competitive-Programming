// the const keyword used a bit differently when pointers are involved.
// these two declarations are equivalent

const int *ptr_a;
int cosnt *ptr_b;

// These two, however are not equivalent
int const *ptr_a;
int *const ptr_b;

//first example
    // making the pointer (*ptr_a) const.
    // i can't do *ptr_a =43; 

//second example
    // the pointer itself is const
    // you can change *ptr_b just fine.
    // but you cann't change [using pointer arithmetic e.g. ptr_b++] the pointer itself.