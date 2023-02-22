//
//  main.c
//  Question 12
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int list[]={10,15,20,30,35};
    int i;
    int a=0;
    
    for(i=0;i<=4;i++){
        if(list[i]<23)
            a=a+1;
    }
    printf("%d numbers smaller than 23\n",a);
    return 0;
}
