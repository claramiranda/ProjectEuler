//
//  euler_1.c
//  
//
//  Created by Clara Miranda on 10/3/20.
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
//

#include <stdio.h>

#define MAX 1000

int main () {
    //printf("%d\n",MAX);
    int i = 0;
    int sum = 0;
    
    for (i=0; i<MAX; i++) {
        if ( i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    
    printf("Total: %d\n",sum);
    
    
    
}
