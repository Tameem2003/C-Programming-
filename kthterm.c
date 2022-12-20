#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,k;
    printf("\n Enter a string \n");
    scanf("%s",str);
    printf("\n Enter the kth term to change ");
    scanf("%d",&k);
    for(i=0;str[i]!='\0';i++)
    {
        i=i+k;
        if((str[i]>='a' && str[i]<='z')){
            str[i]=str[i]-32;
        }
    }
    printf("\nString in upper case=%s",str);
    return(0);
}