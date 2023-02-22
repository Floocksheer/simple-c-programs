//
//  main.c
//  Question 6
//
//  Created by Ahmet Furkan Yorulmaz on 5.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 0;
    int b=0;
    int i=0;
    int list[]={1,-2,3,-4,5};
    while(i<5){
        if(list[i]<0){
            a=a+1;
            i++;
        }
     else if (list[i]>0){
            b=b+1;
           i++;
        }
          
    }
    printf("%d negative numbers\n",a);
     printf("%d positive numbers\n",b);
    return 0;
}
