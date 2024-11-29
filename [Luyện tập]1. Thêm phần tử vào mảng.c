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
    int pos;
    int valuef;
    printf("nhap vi tri: ");
    scanf("%d", &pos);
    pos--;
    
    num1[n + 1];
    for(int i = n + 1; i >= pos; i--){
        num1[i + 1] = num1[i];
    }
    printf("Gia tri thay the: ");
    scanf("%d", &valuef);
    num1[pos] = valuef;
    
    for(int i = 0; i < n + 1; i++){
        printf("%d ", num1[i]);
    }
    return 0;
}
