//
//  main.c
//  Question 22
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>
int bruh(int list[],int num1,int num2){
    int max=0;
    while(num1<=num2){
        if(max<list[num1])
            max=list[num1];
        
        num1++;
   
    }
    return max;
}

int main(int argc, const char * argv[]) {
    int num1,num2;
    int list[]={7,5,9,2,8,1};
    printf("{7,5,9,2,8,1}\n");
    printf("please enter two floor nnumber: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    printf("%d is largest",bruh(list,num1,num2));
    return 0;
}
