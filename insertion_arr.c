#include <stdio.h>

int insertion(int arr[], int n, int pos){
    int i;
    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=30;
    n++;
    return n;
}
int main(){
    int i;
    int arr[10]={10,20,40,50};
    int n=4;
    int pos=2;
    n=insertion(arr,n,pos);
    printf("New array is ");
    for(i=0; i<n; i++){
        printf("%d,",arr[i]);
    }
}