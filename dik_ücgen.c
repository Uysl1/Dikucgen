#include<stdio.h>
int main(){
int s;
printf("satir sayisini giriniz");
scanf("%d",&s);
for(int n =1;n<=s && n>0 ;n++){
    for(int k=1;k<=n && k>0;k++){
    printf("*");

    } 
//printf("*");
printf("\n");
}
return 0;
}