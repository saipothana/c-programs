//evaluating a test

#include<stdio.h>
#include<conio.h>

void main(){
    char key[26],responses[26];

     int students,i,j,k,score[30],wrong[30],count;

     printf("enter students\n");
     scanf("%d",&students);
//printing key
     for(i=1;i<26;i++){
        printf("enter key\n");
        fflush(stdin);
        scanf("%c",&key[i]);
     }
printf("================================================================\n");
     
//printing totl no.of students
for(i=1;i<=students;i++){
   
    count=0;
    k=0;
    printf("enter st %d responses\n",i);
    //asking for individual students responses
    for(j=1;j<26;j++){
        fflush(stdin);
        scanf("%c",&responses[j]);
    }
    //right response
    for(j=1;j<26;j++){
if(responses[j]==key[j]){
    //printf("hi\n");
    count++;
}
//wrong response
else{
   //printf("wrong=%d\n",j);
    wrong[k++]=j;
}

    }
    printf("student-%d\n",i);
printf("score is %d out 0f 25\n",count);
  printf("response to the following\n");
  if(count==25){
    printf("NILL\n");
  }
  //printing wrong response
  else{
 for(j=0;j<k;j++){
  printf("%d ",wrong[j]);
  }
  } 
  printf("\n"); 
}






    
}



