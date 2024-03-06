#include <stdio.h>
#include <math.h>

void print16(void *p){
    printf("a)%04hx ",*(reinterpret_cast<unsigned short *>(p)));
    //printf("b)%016hb ", *(reinterpret_cast<unsigned short *>(p)));
    printf("c)%05hu ",*(reinterpret_cast<unsigned short *>(p)));
    printf("d)%04hx ",*(reinterpret_cast<short *>(p)));
    //printf("e)%016hb ", *(reinterpret_cast<short *>(p)));
    printf("f)%05hi ",*(reinterpret_cast<short *>(p)));
    printf("\n");
}

void print32(void *p){
    printf("a)%08x ",*(reinterpret_cast<unsigned int*>(p)));
    //printf("b)%032b ", *(reinterpret_cast<unsigned int *>(p)));
    printf("c)%010u ",*(reinterpret_cast<unsigned int*>(p)));
    printf("d)%08x ",*(reinterpret_cast<int*>(p)));
    //printf("e)%032b ", *(reinterpret_cast<int *>(p)));
    printf("f)%010i ",*(reinterpret_cast<int*>(p)));
    printf("e)%05.2e ",*(reinterpret_cast<float*>(p)));
    printf("g)%043.2f ",*(reinterpret_cast<float*>(p)));
    

    printf("\n");
}

void arifmetic(void *p){
    short two = 2;
    void* ptr_two = &two;
    printf("Signed multiple by 2 %hd\n",(*(reinterpret_cast<short*>(p))) * (*(reinterpret_cast<short*>(ptr_two))));
    printf("Unigned multiple by 2 %hu\n",(*(reinterpret_cast<unsigned short*>(p))) * (*(reinterpret_cast<unsigned short*>(ptr_two))));
    printf("Signed division by 2 %hd\n",(*(reinterpret_cast<short*>(p))) / (*(reinterpret_cast<short*>(ptr_two))));
    printf("Unigned division by 2 %hu\n",(*(reinterpret_cast<unsigned short*>(p))) / (*(reinterpret_cast<unsigned short*>(ptr_two))));
    short sixteen = 16;
    void* ptr_sexteen = &sixteen;
    printf("Calculation of the remainder of an unsigned division by 16%hu\n",(*(reinterpret_cast<unsigned short*>(p))) % (*(reinterpret_cast<unsigned short*>(ptr_sexteen))));
    printf("Rounding down to a multiple of 16%hu\n", (*(reinterpret_cast<unsigned short*>(p))) * (floor((*(reinterpret_cast<unsigned short*>(p))) / (*(reinterpret_cast<unsigned short*>(ptr_sexteen))))));
    printf("SOME %hu\n", *(reinterpret_cast<unsigned short*>(p)) << 1);
    printf("SOME %hd\n", *(reinterpret_cast<short*>(p)) << 1);
    printf("SOME %hu\n", *(reinterpret_cast<unsigned short*>(p))>> 1);
    printf("SOME %hd\n", *(reinterpret_cast<short*>(p)) >> 1);
    printf("x & 15 %hd", *(reinterpret_cast<unsigned short*>(p)) & 15);
    printf("x & 16 %hd", *(reinterpret_cast<unsigned short*>(p)) & 16);

}

int main(int argc, char *argv[]){

    unsigned short m = 33;
    void* ptr_m = &m;
    short n = -101;
    void* ptr_n = &n;
    printf("Do some math with m\n");
    arifmetic(ptr_m);
    printf("\nDo some math with n\n");
    arifmetic(ptr_n);

}