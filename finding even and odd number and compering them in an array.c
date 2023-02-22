//
//  main.c
//  Question 9
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int list[]={1,2,3,4,5,6};
    int even=0;
    int odd=0;
    int i;
    for(i=0;i<=5;i++){
        if(list[i]%2==0){
            even=even+list[i];
        }
        if(list[i]%2==1){
            odd=odd+list[i];
        }
    }
    if(even>odd){
        printf("even sum>odd sum\n");
    }
    else{
        printf("odd sum>even sum\n");
    }
    return 0;
}
