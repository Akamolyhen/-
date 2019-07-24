
#include<stdio.h>
int main(){
    int a,b,c,tmp;
    printf("please enter values: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a<c){
        tmp = a;
        a = c;
        c = tmp;
    }
    if(b<c){
        tmp = b;
        b = c;
        c = tmp;
    }
    printf("the order is: %d,%d,%d\n",a,b,c);
    return 0;
}
