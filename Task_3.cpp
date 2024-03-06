#include <stdio.h>
//𝐷 = 32

int round_less(int x){
    return(x&0b1111111111100000);
}

int round_more(int x){
    int v = (x&0b1111111111100000);
    if (x&0b0000000000011111){
        return(v+0b0000000000100000);
    }
    else{
        return(v);
    }
}

int main(int argc, char *argv[]){

    for (int i = 0; i < 150; i += 5) {
        printf("%010u ", i);
    printf("%010u ", round_less(i));
    printf("%010u \n", round_more(i));
    }

    // int m = 96;

    // printf("%010u ", m);
    // printf("%010u ", round_less(m));
    // printf("%010u \n", round_more(m));

    return 0;
}