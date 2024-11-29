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
    
     for(int i = 0; i < n -1 ; i++){
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
    pos--;
    int num[n -1];
    for(int i = 0 ; i < n ; i++){
        if(i == pos){
        }else{
           num[z] = num1[i];
            z++;
        }
        
    }
    

    for(int i = 0; i < n -1 ; i++){
        printf("%d ", num[i]);
    }
    return 0;
}
