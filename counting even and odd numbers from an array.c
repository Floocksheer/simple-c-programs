//
//  main.c
//  Question 7
//
//  Created by Ahmet Furkan Yorulmaz on 5.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int i;
    int list[]={1,2,3,4,5};
     
    for(i=0; i<5;i+=1){
        
        if(list[i]%2==1)
            a=a+1;
        if(list[i]%2==0)
            b=b+1;
            }
    printf("%d odd numbers here\n",a);
    printf("%d even numbers here\n",b);
    return 0;
}
