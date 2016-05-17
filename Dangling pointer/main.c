#include <stdio.h>
#include <stdlib.h>

void do_something(int *p){}


int main(){

    int x = 5;
    int *p;
    int **q;

    p = (int*) malloc(sizeof(int));

    do_something(p);

    free(p);

    q = (int**) malloc(sizeof(int)); //it may points to p's space

    *q = &x;

    *p = 5;

    **q = 3; 	//crash or worse!

    return 0;

}
