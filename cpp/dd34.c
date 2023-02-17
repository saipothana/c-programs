#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],b[100][100],c1[100][100],d[100][100],r,c,i,j,k,flag=0;
    printf("enter r\n");
    scanf("%d",&r);
    printf("enter c\n");
    scanf("%d",&c);
    if(r==c){
    for(i=0;i<r;i++){
        printf("enter row:%d\n",i);
        for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        b[i][j]=a[j][i];
    }
}
printf("transpose\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",b[i][j]);
    }
    printf("\n");
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        c1[i][j]=0;
        for(k=0;k<c;k++){
            c1[i][j]=c1[i][j]+a[i][k]*b[k][j];
        }
    }
}
printf("a* at matr\n");
int val=c1[0][0];
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",c1[i][j]/val);
    }
    printf("\n");
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        d[i][j]=a[i][j];
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(i==j){
            d[i][j]=1;
        }
        else{
d[i][j]=0;
        }
    }
}
printf("print\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       printf("%d",d[i][j]);
    }
    printf("\n");
}  
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(c1[i][j]/val!=d[i][j]){
            flag=1;
            break;
        }
    }
}


if(flag==0){
    printf("orthogonal");
}
else{
    printf("not");
}

    }
    else{
        printf("%d * %d not square",r,c);
    }
}