//
//  main.c
//  Question 17
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>


 int main(int argc, const char * argv[]) {
   
    int list[]={12,31,23,18};
    int i=0;
    int max = 0;
     for(i=0;i<=3;i++){
         if(max<list[i])
            
             max=list[i];
         
     }
     printf("%d\n",max);
     
    return 0;
}

