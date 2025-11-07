#include <stdio.h>

int add(int a, int b){ 
    return a+b; 
    
}
int subtract(int a, int b){
    return a-b; 
    
}
int multiply(int a, int b){
    return a*b; 
    
}
int divide(int a, int b){ 
    return a/b; 
    
}


struct operations {
    int (*add)(int, int);
    int (*subtract)(int, int);
    int (*multiply)(int, int);
    int (*divide)(int, int);
};

int main() {
    
    struct operations ops;

    ops.add = add;
    ops.subtract = subtract;
    ops.multiply = multiply;
    ops.divide = divide;
    int x = 20, y = 5;
    printf("add      : %d\n", ops.add(x, y));
    printf("subtract : %d\n", ops.subtract(x, y));
    printf("multiply : %d\n", ops.multiply(x, y));
    printf("divide   : %d\n", ops.divide(x, y));

    return 0;
}
