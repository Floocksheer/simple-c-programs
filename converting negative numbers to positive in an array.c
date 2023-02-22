//
//  main.c
//  Question 13
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int list[]={1,2,-3,4,-5};
    int i;
    
    for(i=0;i<=4;i++){
        if(list[i]<0)
            list[i]=list[i] * -1;
        }
    printf("%d%d%d%d%d\n",list[0],list[1],list[2],list[3],list[4]);
    
    return 0;
}
