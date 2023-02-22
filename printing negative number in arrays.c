//
//  main.c
//  Question 4
//
//  Created by Ahmet Furkan Yorulmaz on 5.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    int list[]={2,-1,6,-8,7};
    for(i=0; i<=4; i+=1){
        if (list[i]<0)
            printf("%d\n",list[i]);
        
    }
    
    return 0;
}
