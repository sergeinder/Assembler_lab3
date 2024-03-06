#include <stdio.h>

int main(int argc, char *argv[]){

    unsigned short m = 33;
    short n = -101;
    float a = 0;
    float b = 1;
    float c = 12345689;
    float d = 123456891;
    unsigned int e = 0;
    unsigned int f = 4294967295;
    int g = 2147483647;
    int h = -2147483648;

    printf("m)%05hu ",++m);
    printf("n)%05hi ",++n);
    printf("a)%013.2f ",++a);
    printf("b)%013.2f ",++b);
    printf("c)%013.2f ",++c);
    printf("d)%013.2f ",++d);
    printf("e)%010u ",++e);
    printf("f)%010u ",++f);
    printf("g)%010i ",++g);
    printf("h)%010i ",++h);

    return 0;

}