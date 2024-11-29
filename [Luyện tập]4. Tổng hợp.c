#include <stdio.h>
int main(){
    int menu;
    int arr[100];
    int n = 0;
    int menu1, pos,value;
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
        arr[n];
        for(int i = 0; i < n; i++){
            printf("Phần tử %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        printf("\n");
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
       
        if(n == 0){
                printf("invalid\n");
                goto menu1;
            }
        printf("--Các phần tử có trong mảng--\n");    
        for(int i = 0; i < n ; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
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
        if(n == 0){
                printf("invalid\n");
                goto menu1;
            }
         do{
        printf("nhap vi tri muốn thêm: ");
        scanf("%d", &pos);
        if(pos > n || pos < 0){
        printf("invalid\n");
          }
       }while(pos > n || pos < 0);
        arr[n + 1];
        for(int i = n ; i >= pos; i--){
            arr[i + 1] = arr[i];
        }
        printf("Gia tri them vao: ");
        scanf("%d", &value);
        arr[pos -1] = value;
        
        for(int i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
        }
        printf("\n");
        menu1:
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
        
        case 4:
         if(n == 0){
                printf("invalid\n");
                goto menu1;
            }
        for(int i = 0; i < n; i++){
          printf("%d ", arr[i]);
        }
         printf("\n");
         do{
        printf("nhap vi tri muốn sửa: ");
        scanf("%d", &pos);
        if(pos > n || pos < 0){
        printf("invalid\n");
          }
       }while(pos > n || pos < 0);
        
        for(int i = 0; i < n; i++){
          if(pos == i + 1){
              printf("Giá trị muốn thay: ");
              scanf("%d", &arr[i]);
          }
        }
        for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        }
        printf("\n");
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
        
        case 5:
        if(n == 0){
                printf("invalid\n");
                goto menu1;
            }
        for(int i = 0; i < n; i++){
          printf("%d ", arr[i]);
        }
        printf("\n");
      do{
        printf("nhap vi tri muốn xoá: ");
        scanf("%d", &pos);
        if(pos > n || pos < 0){
        printf("invalid\n");
          }
       }while(pos > n || pos < 0);

        printf("\n");
        for(int i = pos - 1 ; i < n - 1; i++){
             arr[i] = arr[i + 1];
         }
        for(int i = 0; i < n - 1; i++){
         printf("%d ", arr[i]);
        }
        printf("\n");
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
        
        case 6:
        printf("--Đã Thoát--");
        return 0;
        break;
    }
    return 0;
}
