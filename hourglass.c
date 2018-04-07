#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[6][6];
    int i,j;
    for(i = 0; i < 6; i++){
       for(j = 0; j < 6; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    int s=0,max=0;
    max=a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            s=a[i][j+1]+a[i][j+2]+a[i][j]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        }
        if(s>=max)
            max=s;
    }
    printf("%d",max);
    return 0;
}

