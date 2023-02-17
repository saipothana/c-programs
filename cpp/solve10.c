#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() { 
    int n;
     scanf("%d",&n); 
     char *p[]={"zero","one","two","three","four","five","six","seven","eight","nine","Greater than 9"}; 
     if(n<=9) { 
        printf("%s",p[n]); 
        } 
        else {
             printf("%s",p[10]); 
             } 
             return 0; 
             }