//
//  main.c
//  Question 5
//
//  Created by Ahmet Furkan Yorulmaz on 5.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int j;
    int i;
    char harfler[]="abcdefg";
    char list[]="a!b?dc";
    for(i=0;i<6;i+=1){
        for(j=0;j<7;j+=1){
            if(list[i]==harfler[j])
                printf("%c\n",list[i]);
        }
    }
    return 0;
}

