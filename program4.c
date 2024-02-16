//next big elem
#include <stdio.h>

int main() {
    int i,j,arr[5]={3,4,6,7,1};
    for(i=0;i<5;i++){
        if(arr[i]+1==arr[i+1]){
            printf("%d ,%d\n",arr[i],arr[i+1]);
        }
    }
}
