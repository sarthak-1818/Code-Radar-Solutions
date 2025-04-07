#include<stdio.h>

void rotated(int *arr, int n , int k){
    int rotate[n];
    for(int i = 0 ; i<k ; i++){
        rotate[i]=arr[(n-k)+i];
    }

    for(int i=k ; i<n ; i++){
        rotate[i]=arr[i-k];
    }
    for(int i=0; i<n; i++){
        printf("%d", rotate[i]);
        printf("\n");
    }
}
int main(){ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<=n-1 ; i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);
    rotated(arr , n , k);
    return 0;
}