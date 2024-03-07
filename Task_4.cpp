#include <stdio.h>

unsigned short inkr_un_short(unsigned short x){
    int* v = reinterpret_cast<int*>(&x);
    (*v)++;
    return(*(reinterpret_cast<unsigned short*>(v)));
}

short inkr_short(short x){
    int* v = reinterpret_cast<int*>(&x);
    (*v)++;
    return(*(reinterpret_cast<short*>(v)));
}

float inkr_float(float x){
    int* v = reinterpret_cast<int*>(&x);
    (*v)++;
    return(*(reinterpret_cast<float*>(v)));
}

unsigned int inkr_un_int(unsigned int x){
    int* v = reinterpret_cast<int*>(&x);
    (*v)++;
    return(*(reinterpret_cast<unsigned int*>(v)));
}

int inkr_int(int x){
    int* v = reinterpret_cast<int*>(&x);
    (*v)++;
    return(*(reinterpret_cast<int*>(v)));
}

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

    printf("m)%05hu ",m);
    printf("%05hu \n",inkr_un_short(m));
    printf("n)%05hi ",n);
    printf("%05hi \n",inkr_short(n));
    printf("a)%013.2f ",a);
    printf("%013.2f \n",inkr_float(a));
    printf("b)%013.2f ",b);
    printf("%013.2f \n",inkr_float(b));
    printf("c)%013.2f ",c);
    printf("%013.2f \n",inkr_float(c));
    printf("d)%013.2f ",d);
    printf("%013.2f \n",inkr_float(d));
    printf("e)%010u ",e);
    printf("%010u \n",inkr_un_int(e));
    printf("f)%010u ",f);
    printf("%010u \n",inkr_un_int(f));
    printf("g)%010i ",g);
    printf("%010i \n",inkr_int(g));
    printf("h)%010i ",h);
    printf("%010i \n",inkr_int(h));

    return 0;

}