#include <stdio.h>
int main(){
    int menu;
    int arr[100][100];
    int n = 0;
    int menu1, pos,value;
    int col, row;
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
    if(menu > 9 || menu < 0){
        printf("   ---invalid---\n");
    }}while(menu > 9 || menu < 0);
    
    switch(menu){
        case 1:
        printf("Nhập số cột và số cột: ");
        scanf("%d", &col);
        row = col;
       for(int i = 0; i < col; i ++){
           for(int y = 0; y < row; y++){
               printf("cột %d hàng %d: ", i + 1, y + 1);
               scanf("%d", &arr[col][row]);
           }
       }
        goto menu1;
        break;
        case 2:
         for(int i = 0; i < col; i ++){
           for(int y = 0; y < row; y++){
               printf("%d ", arr[col][row]);
           }
       }
        break;
        
        case 3:
        break;
        
        case 4:
        break;
        
        case 5:
        break;
        
        case 6:
        break;
        
        case 7:
        break;
        
        case 8:
        break;
        
        menu1:
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
