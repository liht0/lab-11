#include <stdarg.h>
#include "functions.h"
#include <limits.h>
int sum(int count, ...) {  
    va_list args;         
    va_start(args, count); 
    int i;
    int total = 0;         
    for(i = 0; i < count; i++) {  
        total += va_arg(args, int);   
    }
    
    va_end(args);      
    return total;         
}


int max(int count, ...) {
    va_list args;
    va_start(args, count);
    int i;
    int current_max = INT_MIN;  
    for(i = 0; i < count; i++) {
        int num = va_arg(args, int);  
        if(num > current_max) {      
            current_max = num;        
        }
    }
    
    va_end(args);
    return current_max;
}


int min(int count, ...) {
    va_list args;
    va_start(args, count);
    int i;
    int current_min = INT_MAX;  
    for(i = 0; i < count; i++) {
        int num = va_arg(args, int); 
        if(num < current_min) {      
            current_min = num;      
        }
    }
        va_end(args);
    return current_min;
}
double sred(int count, ...) {
    va_list args;
    va_start(args, count);
    int i;
    int total = 0;
    for(i = 0; i < count; i++) {
        total += va_arg(args, int);  
    }
    
    va_end(args);
    return (double)total / count;    
}
