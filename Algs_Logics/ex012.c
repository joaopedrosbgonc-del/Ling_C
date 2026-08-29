#include <stdio.h>
#include <math.h>

int main(){
    int i, nums[2], Q1, Q2;
    
    for(i=1;i<=2;i++){
        printf("Digite o %d numero\n--> ", i);
        scanf("%d", &nums[i-1]);
        while(nums[i-1] < 0){
            printf("ERROR! Digite um numero positivo!\n--> ");
            scanf("%d", &nums[i-1]);
        }
    }
    Q1 = pow(nums[0], nums[1]);
    Q2 = pow(nums[1], nums[0]);

    printf("%d elevado a %d: %d\n%d elevado a %d: %d", nums[0], nums[1], Q1, nums[1], nums[0], Q2);
}