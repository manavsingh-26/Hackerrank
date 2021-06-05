#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     
    char str[1000];
    scanf("%s",str);
    int arr[10];
    for(int i =0;i<10;i++)
    arr[i]=0;
    for(int i =0;i<10;i++){
        for(int j=0;str[j]!='\0';j++){
            if (str[j]==i+48){
                arr[i]++;
            }
            
        }
    }  
    for(int i =0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
}
