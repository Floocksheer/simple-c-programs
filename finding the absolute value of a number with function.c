//
//  main.c
//  Question 20
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>

void bruh(){
    int x;
    printf("please enter a number: ");
    scanf("%d",&x);
    
    if(x>=0){
        x=x;
        
    }
    if(x<0){
        x=x*-1;
    }
    printf("absolute value is: %d\n",x);
}


int main(int argc, const char * argv[]) {
    
    bruh();
    
    return 0;
}
