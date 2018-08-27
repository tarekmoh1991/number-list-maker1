#include<stdio.h>
#include<string.h>
//this code written by tarek mohammed shallof Fb:https://www.facebook.com/tareq.moh.963
int main(){
FILE *pf;
int i;
int start;
int last;
printf("Enter the start number\n");
scanf("%d",&start);
printf("Enter the last number\n");
scanf("%d",&last);
pf = fopen("list.txt","w");

for(i=start;i<=last;i++){
    fprintf(pf,"%d\n",i);
    

}
return 0;
}