#include <stdio.h>
//𝐷 = 32

int round_less(int x){
    return(x&0b1111111111100000);
}

int main(int argc, char *argv[]){
    int m = 94;

    printf("%010u ", m);
    printf("%010u ", round_less(m));

    return 0;
}