#include <stdio.h>
int main(){
    int menu;
    int arr[100];
    int n = 0;;
    int menu1;
    menu:
    do{
    printf("1.Nhập vào mảng\n");
    printf("2.Hiển thị mảng\n");
    printf("3.Thêm phần tử\n");
    printf("4.Sửa phần tử\n");    
    printf("5.Xóa phần tử\n");    
    printf("6.Thoát\n");
    printf("Enter your number: ");   
    scanf("%d", &menu);
    if(menu > 6 || menu < 0){
        printf("   ---invalid---\n");
    }}while(menu > 6 || menu < 0);
    
    switch(menu){
        // 1.Nhập vào mảng
        case 1:
        printf("Số phần tử muốn nhập: ");
        scanf("%d", &n);
        if(n < 0){
            printf("invalid");
        }
        for(int i = 0; i < n; i++){
            printf("Phần tử %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        printf("1.back\n");
        printf("2.Exit\n");
        do{
        scanf("%d", &menu1);
        }while(menu1 > 2 || menu1 < 0);
        if(menu1 == 1){
            goto menu;
        }else {
            return 0;
        }
        break;
        //2.Hiển thị mảng
        case 2:
        
        printf("--Các phần tử có trong mảng--\n");
        if(n == 0){
                printf("invalid\n");
            }
        for(int i = 0; i < n ; i++){
            printf("%d ", arr[i]);
        }
        
        printf("1.back\n");
        printf("2.Exit\n");
        do{
        scanf("%d", &menu1);
        }while(menu1 > 2 || menu1 < 0);
        if(menu1 == 1){
            goto menu;
        }else {
            return 0;
        }
        break;
        //3.Thêm phần tử
        case 3:
        do{
        scanf("%d", &menu1);
        }while(menu1 > 2 || menu1 < 0);
        if(menu1 == 1){
            goto menu;
        }else {
            return 0;
        }
        break;
        
        case 4:
        do{
        scanf("%d", &menu1);
        }while(menu1 > 2 || menu1 < 0);
        if(menu1 == 1){
            goto menu;
        }else {
            return 0;
        }
        break;
        
        case 5:
        do{
        scanf("%d", &menu1);
        }while(menu1 > 2 || menu1 < 0);
        if(menu1 == 1){
            goto menu;
        }else {
            return 0;
        }
        break;
        
        case 6:
        return 0;
        break;
    }
    return 0;
}



