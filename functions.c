#include <stdarg.h>
#include "functions.h"
#include <limits.h>
int sum(int count, ...) {  
    va_list args;         
    va_start(args, count); 
    int i;
    int result = 0;         
    for(i = 0; i < count; i++) {  
        result += va_arg(args, int);   
    }
    
    va_end(args);      
    return result;         
}


int max(int count, ...) {
    va_list args;
    va_start(args, count);
    int i;
    int result_max = INT_MIN;  
    for(i = 0; i < count; i++) {
        int num = va_arg(args, int);  
        if(num > current_max) {      
            result_max = num;        
        }
    }
    
    va_end(args);
    return result_max;
}


int min(int count, ...) {
    va_list args;
    va_start(args, count);
    int i;
    int result_min = INT_MAX;  
    for(i = 0; i < count; i++) {
        int num = va_arg(args, int); 
        if(num < result_min) {      
            result_min = num;      
        }
    }
        va_end(args);
    return result_min;
}
double sred(int count, ...) {
    va_list args;
    va_start(args, count);
    int i;
    int result = 0;
    for(i = 0; i < count; i++) {
        result += va_arg(args, int);  
    }
    
    va_end(args);
    return (double)result / count;    
}
