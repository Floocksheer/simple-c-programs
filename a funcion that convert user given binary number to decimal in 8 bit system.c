//
//  main.c
//  Question 23
//
//  Created by Ahmet Furkan Yorulmaz on 7.11.2022.
//

#include <stdio.h>

int bruh(int list[]){
    
    int decimal=0;
    int i=1;
    int a=64;
    if(list[0]==1)
        decimal=decimal-128;
    while(i<8){
        if(list[i]>0)
            decimal=decimal+a;
        i++;
        a=a-a/2;
        }
    
    
    return decimal;
}



int main(int argc, const char * argv[]) {
   
    int list[8];
    printf("please enter a binary number in eight bits system: ");
    scanf("%d",&list[0]); scanf("%d",&list[1]); scanf("%d",&list[2]); scanf("%d",&list[3]); scanf("%d",&list[4]); scanf("%d",&list[5]); scanf("%d",&list[6]); scanf("%d",&list[7]);
    printf("decimal form is: %d\n", bruh(list));
    
    return 0;
}
