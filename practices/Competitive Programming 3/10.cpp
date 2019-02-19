/// ASSERT EXAMPLE ///
#include <stdio.h>
#include <assert.h>

void print_number(int *myint){
    assert(myint!=NULL);
    printf("%d\n",*myint);
}

int main(){
    int a = 10;
    int *b = NULL;
    int *c = NULL;
    b=&a;

    print_number(b);
    print_number(c);
    return 0;
}