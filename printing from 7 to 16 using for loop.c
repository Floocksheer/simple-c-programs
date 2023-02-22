//
//  main.c
//  Question 3
//
//  Created by Ahmet Furkan Yorulmaz on 5.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0;
    int i;
    for(i=7; i<16; i+=1){
        a=a+1;
        printf("%d-%d\n",a,i);
    }
    
    return 0;
}
