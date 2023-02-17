//pyramid pattern

    /*       *
           * * *
         * * * * *
       * * * * * * *
     * * * * * * * * *
     
     */
/*

    //analyze: n  i s j
    //         5  0 4 1
               5  1 3 3
               5  2 2 5
               5  3 1 7
               5  4 0 9

n--means length   i--means no of rows  s--spaces  j--col


write s formula using n i---s=n-i-1

write j for use n i---j=i*2+1
               */

           /*   #include<stdio.h>
              #include<conio.h>
              void main(){
                int n,i,j,k,s;
                printf("enter n\n");
                scanf("%d",&n);

                for(i=0;i<n;i++){
                    for(s=0;s<n-i-1;s++){
                       printf("  ");
                    }
                    for(j=0;j<i*2+1;j++){
                        printf("* ");
                    }
                    
                    printf("\n");

                }
              }

              */



             // we can optimise this code by  solve j and s

             //i*2+1+n-i-1==n+1
                    
                
              #include<stdio.h>
              #include<conio.h>
              void main(){
                int n,i,j,k,s;
                printf("enter n\n");
                scanf("%d",&n);

                for(i=0;i<n;i++){
                   
                    for(j=0;j<n+i;j++){
                       if(j<n-i-1){
                        printf(" ");
                       }
                       else{
                        printf("*");
                       }
                    }
                    
                    printf("\n");

                }

              }