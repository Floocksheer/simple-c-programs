//
//  main.c
//  Question 14
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int list[]={0,0,0,0,0,0,0,0};
    int x;
    int i=64;
    int a=1;
    printf("please enter a positive number: ");
    scanf("%d",&x);
    if(x>127){
        printf("error");
    }
    else{
        while(x>0){
            if(x>=i){
                x=x-i;
                list[a]=1;
                a=a+1;
            }
            else{
                list[a]=0;
                a=a+1;
            }
            i=i-i/2;
        }
        printf("%d%d%d%d%d%d%d%d\n",list[0],list[1],list[2],list[3],list[4],list[5],list[6],list[7]);
    }
    
    return 0;
}
