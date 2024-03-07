#include <stdio.h>
#include <math.h>

void arifmetic(void *p){
    short two = 2;
    void* ptr_two = &two;
    printf("Sign multiple by 2 %hd\n",(*(reinterpret_cast<short*>(p))) * (*(reinterpret_cast<short*>(ptr_two))));
    printf("Unign multiple by 2 %hu\n",(*(reinterpret_cast<unsigned short*>(p))) * (*(reinterpret_cast<unsigned short*>(ptr_two))));
    printf("Sign division by 2 %hd\n",(*(reinterpret_cast<short*>(p))) / (*(reinterpret_cast<short*>(ptr_two))));
    printf("Unign division by 2 %hu\n",(*(reinterpret_cast<unsigned short*>(p))) / (*(reinterpret_cast<unsigned short*>(ptr_two))));
    short sixteen = 16;
    void* ptr_sexteen = &sixteen;
    printf("Calculation of the remainder of an unsigned division by 16 %hu\n",(*(reinterpret_cast<unsigned short*>(p))) % (*(reinterpret_cast<unsigned short*>(ptr_sexteen))));
    printf("Rounding down to a multiple of 16 %hu\n", (*(reinterpret_cast<unsigned short*>(p))) * (floor((*(reinterpret_cast<unsigned short*>(p))) / (*(reinterpret_cast<unsigned short*>(ptr_sexteen))))));
    printf("Sign shift to the left by 1 bit %hu\n", *(reinterpret_cast<short*>(p)) << 1);
    printf("Unign shift to the left by 1 bit %hd\n", *(reinterpret_cast<unsigned short*>(p)) << 1);
    printf("Sign shift to the left by 1 bit %hu\n", *(reinterpret_cast<short*>(p))>> 1);
    printf("Unsign shift to the left by 1 bit %hd\n", *(reinterpret_cast<unsigned short*>(p)) >> 1);
    printf("x & 15 %hd\n", *(reinterpret_cast<unsigned short*>(p)) & 15);
    printf("x & -16 %hd\n", *(reinterpret_cast<unsigned short*>(p)) & -16);

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