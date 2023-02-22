//
//  main.c
//  Question 8
//
//  Created by Ahmet Furkan Yorulmaz on 5.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i=0;
    int list[]={1,2,3,4,5,6};
    int x;
    int a=0;
    int b=0;
    printf("enter a number: ");
    scanf("%d",&x);
    
    while( i<=5){
        if(x==list[i]){
            a=a+1;
        }
        else{
            b=b+1;
        }
            i++;
        }
    
    if(a>0)
        printf("found\n");
    if(a==0)
        printf("not found\n");
    return 0;
}
