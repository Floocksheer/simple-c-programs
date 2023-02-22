//
//  main.c
//  Question 21
//
//  Created by Ahmet Furkan Yorulmaz on 6.11.2022.
//

#include <stdio.h>

int bruh(int x[], int size){
    printf("Please Enter 5 numbers: ");
    scanf("%d%d%d%d%d", &x[0], &x[1], &x[2], &x[3], &x[4]);

    int max = x[0];
    int i = 0;

    while(i < size){
        if(max<x[i])
            max = x[i];
            i++;
    }
    return max;
}

int main(){
    int x[5];
    printf("The biggest number is: %d\n", bruh(x, 5));

    return 0;
}





