//
//  euler_2.c
//  
//
//  Created by Clara Miranda on 10/3/20.
//
#include <stdio.h>
#include <math.h>

#define MAX 4000000


int main () {
    
    double fibo = 0, sum = 0, previous = 1, penultimate = 0,i, confirm = 2.0f;
    
    do {
        fibo = previous + penultimate;
        penultimate = previous;
        previous = fibo;
        
        if ( fmod(fibo,confirm) == 0.0 ) {
            sum += fibo;
        }
    } while (fibo < MAX);
    
    printf("Sum =  %.0f\n",sum);
    
    return 0;
}
