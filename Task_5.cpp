#include <stdio.h>

float abs(float x){
    int* v = reinterpret_cast<int*>(&x);

    *v = (*v)&0b01111111111111111111111111111111;
    return(*(reinterpret_cast<float*>(v)));
}

int main(int argc, char *argv[]){

    float m = -96.03;

    printf("%043.2f ", m);
    printf("%043.2f ", abs(m));

    return 0;

}