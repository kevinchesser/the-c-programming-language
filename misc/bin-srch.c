#include <stdio.h>

#define ARRLENGTH 10

int bSearch(int arr[], int target){
    int low = 0;
    int high = ARRLENGTH -1;
    int mid = (high + low) / 2;
    while(low <= high){
        if(target < arr[m]){ //If the target value is smaller 
            high = high/2 + 1;
            continue;
        }        
        if(target > arr[m]){ //If the taget value is greater

            continue;
        }
        return mid;
    }
    return -1;
}

int main(void){
    int arr[ARRLENGTH];
    int i = 0;
    for(i = 0; i < ARRLENGTH; i++){
        arr[i] = i;
    }
    int target = 2;
    int index = 0;
    index = bSearch(arr, target);
    printf("%d\n", index);
    return 0;
}
