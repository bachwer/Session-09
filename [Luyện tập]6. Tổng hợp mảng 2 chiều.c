#include <stdio.h>
int main(){
    int menu;
    int arr[100][100];
    int menu1,value;
    int col = 0, row = 0;
    menu:
    do{
    printf("1.Nhập kích cỡ và giá trị các phần tử của mảng\n");
    printf("2.In giá trị các phần tử của mảng theo ma trận\n");
    printf("3.In giá trị các phần tử là lẻ và tính tổng\n");
    printf("4.In ra các phần tử nằm trên đường biên và tính tích\n");    
    printf("5.In ra các phần tử nằm trên đường chéo chính\n");    
    printf("6.In ra các phần tử nằm trên đường chéo phụ\n");
    printf("7.In ra dòng có tổng giá trị các phần tử là lớn nhất\n");
    printf("8.Thoát\n");
    printf("Enter your number: ");   
    scanf("%d", &menu);
    if(menu >= 9 || menu <= 0){
        printf("   ---invalid---\n");
    }}while(menu >= 9 || menu <= 0);
    
    switch(menu){
        case 1:
        printf("Nhập số cột và số hàng: ");
        scanf("%d", &col);
        row = col;
        arr[col][row];
       for(int i = 0; i < col; i ++){
           for(int y = 0; y < row; y++){
               printf("cột %d hàng %d: ", i + 1, y + 1);
               scanf("%d", &arr[i][y]);
           }
       }
        goto menu1;
        break;
        case 2:
        if(col == 0 && row == 0){
            printf(" ---invalid---\n");
            goto menu1;
        }
        
         for(int i = 0; i < col; i ++){
           for(int y = 0; y < row; y++){
               printf("%d  ", arr[i][y]);
           }
           printf("\n");
       }
       goto menu1;
        break;
        
        case 3:
        if(col == 0 && row == 0){
            printf(" ---invalid---\n");
            goto menu1;
        }
        
        
        for(int i = 0; i < col; i ++){
           for(int y = 0; y < row; y++){
               if(arr[i][y] % 2 == 0){
                   printf("   ");
               }else{
                   printf("%d  ", arr[i][y]);
                   value += arr[i][y];
               }
           }
           printf("\n");
       }
       printf("Tổng số lẻ : %d", value);
       goto menu1;
        break;
        
        case 4:
         if(col == 0 && row == 0){
            printf(" ---invalid---\n");
            goto menu1;
        }
        value = 1;
        for(int i = 0; i < col; i ++){
           for(int y = 0; y < row; y++){
               if(i == 0 || y == 0 || i == col - 1 || y == row - 1){
                   printf("%d  ", arr[i][y]);
                   value *= arr[i][y];
               }else{
                  printf("   ");
               }
           }
           printf("\n");
       }
        printf("Tích tất cả số ở đg biên là: %d", value);
        goto menu1;
        break;
        
        case 5:
        if(col == 0 && row == 0){
            printf(" ---invalid---\n");
            goto menu1;
        }
        
         for(int i = 0; i < col; i ++){
           for(int y = 0; y < row; y++){
              if( i == y){
                 printf("%d  ", arr[i][y]);
              }else{
                  printf("   ");
               }
           }
           printf("\n");
       }
       goto menu1;
        break;
        
        case 6:
        if(col == 0 && row == 0){
            printf(" ---invalid---\n");
            goto menu1;
        }
        value = 1;
         for(int i = 0; i < col; i ++){
           for(int y = 0 ; y < row; y++){
              if(y == row - value){ 
                 printf("%d  ", arr[i][y]);
                  value++;
              }else{
                  printf("   ");
               }
           }
           printf("\n");
       }
       goto menu1;
        break;
        
        case 7:
        if(col == 0 && row == 0){
            printf(" ---invalid---\n");
            goto menu1;
        }
        
        int value1 = 0;
        int pos;
        value = 0;
         for(int i = 0; i < col; i ++){
             value = 0;
           for(int y = 0; y < row; y++){
               value += arr[i][y];
           }
            if(value1 < value){
                value1 = value;
                pos = i;
            }
         }
        printf("Hàng có tổng lớn nhất là: \n");
           for(int y = 0; y < row; y++){
               printf("%d ", arr[pos][y]);
           }
        goto menu1;
        break;
        
        case 8:
           printf("Đã thoát\n");
           return 0;
        break;
        menu1:
        printf("\n");
        menu1 = 0;
        printf("1.Back to menu\n");
        printf("2.Exit\n");
        do{
        scanf("%d", &menu1);
        }while(menu1 > 2 || menu1 < 0);
        if(menu1 == 1){
            goto menu;
        }else {
            return 0;
        }
        }
    return 0;
}
