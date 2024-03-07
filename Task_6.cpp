#include <stdio.h>
#include <cmath>

void print64(void *p){
    printf("a)%016llx ",*(reinterpret_cast<unsigned long long*>(p)));
    //printf("b)%064b ", *(reinterpret_cast<unsigned long long *>(p)));
    printf("c)%020llu ",*(reinterpret_cast<unsigned long long*>(p)));
    printf("d)%016llx ",*(reinterpret_cast<long long*>(p)));
    //printf("e)%064b ", *(reinterpret_cast<long long *>(p)));
    printf("f)%020lli ",*(reinterpret_cast<long long*>(p)));
    printf("g)%5.2f ",*(reinterpret_cast<double*>(p)));
    printf("e)%5.2e ",*(reinterpret_cast<double*>(p)));

    printf("\n");
}

float sum_row_float(int start, int end){
    if(start < end){
        float result;
        float member;
        for(int i = 0; i <= end;i++){
            member = 1./(*(reinterpret_cast<float*>(&i)));
            result += member;
        }
        return result;
    }
    else{
        float result;
        float member;
        for(int i = end; i >= start;i--){
            member = 1./(*(reinterpret_cast<float*>(&i)));
            result += member;
        }
        return result;
    }
}

double sum_row_double(int start, int end){
    if(start < end){
        double result;
        double member;
        for(int i = 0; i <= end;i++){
            member = 1./(*(reinterpret_cast<double*>(&i)));
            result += member;
        }
        return result;
    }
    else{
        double result;
        double member;
        for(int i = end; i >= start;i--){
            member = 1./(*(reinterpret_cast<double*>(&i)));
            result += member;
        }
        return result;
    }
}

int main(int argc, char *argv[]){
    int n_3 = 1000;
    int n_6 = 1000000;
    int n_9 = 1000000000;
    
    printf("Naive order for n = 10**3: %f\n", sum_row_float(1, n_3));
    printf("Naive order for n = 10**6: %f\n", sum_row_float(1, n_6));
    printf("Naive order for n = 10**9: %f\n\n", sum_row_float(1, n_9));

    printf("Reverse order for n = 10**3: %f\n", sum_row_float(n_3,1));
    printf("Reverse order for n = 10**6: %f\n", sum_row_float(n_6,1));
    printf("Reverse order for n = 10**9: %f\n\n", sum_row_float(n_9,1));

    printf("Same math for double\n\n");
    
    double tmp_double = sum_row_double(1, n_3);
    void* ptr_tmp = &tmp_double;
    print64(ptr_tmp);
    
    tmp_double = sum_row_double(1, n_6);
    ptr_tmp = &tmp_double;
    print64(ptr_tmp);
    
    tmp_double = sum_row_double(1, n_9);
    ptr_tmp = &tmp_double;
    print64(ptr_tmp);

    tmp_double = sum_row_double(n_3, 1);
    ptr_tmp = &tmp_double;
    print64(ptr_tmp);

    tmp_double = sum_row_double(n_6, 1);
    ptr_tmp = &tmp_double;
    print64(ptr_tmp);

    tmp_double = sum_row_double(n_9, 1);
    ptr_tmp = &tmp_double;
    print64(ptr_tmp);
}