#include <stdio.h>

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

int main(int argc, char *argv[]){
    unsigned short m = 33;
    void* ptr_m = &m;
    short n = -101;
    void* ptr_n = &n;

    printf("16-bit representation of m\n");
    print16(ptr_m);
    printf("16-bit representation of n\n");
    print16(ptr_n);

    void* ptr_m_32_unsigned = reinterpret_cast<unsigned int*>(&m);
    void* ptr_m_32_signed = reinterpret_cast<unsigned int*>(&m);
    void* ptr_n_32_unsigned = reinterpret_cast<int*>(&n);
    void* ptr_n_32_signed = reinterpret_cast<int*>(&n);
    
    printf("32-bit representation of expanded unsigned m\n");
    print32(ptr_m_32_unsigned);
    printf("32-bit representation of expanded signed m\n");
    print32(ptr_m_32_signed);
    printf("32-bit representation of expanded unsigned n\n");
    print32(ptr_n_32_unsigned);
    printf("32-bit representation of expanded signed n\n");
    print32(ptr_n_32_signed);
    
    return 0;
}