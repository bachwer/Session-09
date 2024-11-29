#include <stdio.h>
int main(){
    int n;
    int num1[100];
    printf("Nhap phan tu: ");
    scanf("%d", &n);
    num1[n];
    for(int i = 0; i < n; i++){
        printf("Nhap pt %d: ", i + 1);
        scanf("%d", &num1[i]);
    }
    
     for(int i = 0; i < n ; i++){
        printf("%d ", num1[i]);
    }
    printf("\n");
    int pos;
    int z = 0;
    do{
    printf("nhap vi tri muốn xoá: ");
    scanf("%d", &pos);
    if(pos > n || pos < 0){
        printf("invalid\n");
    }
    }while(pos > n || pos < 0);
    for(int i = pos - 1 ; i < n - 1 ; i++){
       num1[i] = num1[i + 1];
       }

    for(int i = 0; i < n -1 ; i++){
        printf("%d ", num1[i]);
    }
    return 0;
}
