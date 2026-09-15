#include <stdio.h>
#include <string.h>

int main(){
    int v[3];
    
    for(int i=1; i<=3; i++){
        printf("%d numero:\n--> ", i);
        scanf("%d", &v[i-1]);
    }

    if(v[0] < v[2]){
        int temp = v[0];
        v[0] = v[2];
        v[2] = temp;
    }

    if(v[1] < v[2]){
        int temp = v[1];
        v[1] = v[2];
        v[2] = temp;
    }

    if(v[0] < v[1]){
        int temp = v[0];
        v[0] = v[1];
        v[1] = temp;
    }

    for(int i=0; i<3; i++){
        printf("%d ", v[i]);
    }    
}