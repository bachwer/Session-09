#include <stdio.h>
int main(){
    int menu;
    int arr[100];
    int n = 0;
    int menu1, pos,value;
    menu:
    do{
    printf("1.Nhập số phần tử cần nhập và giá trị các phần tử\n");
    printf("2.In ra giá trị các phần tử đang quản lý\n");
    printf("3.In ra giá trị các phần tử chẵn và tính tổng\n");
    printf("4.In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");    
    printf("5.In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");    
    printf("6.Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
    printf("7.Thêm một phần từ vào vị trí chỉ định\n");
    printf("8.Thoát\n");
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

        case 3:
        if(n == 0){
                printf("invalid\n");
                goto menu1;
            }
        for(int i = 0; i < n; i ++){
            if(arr[i] % 2 == 0){
                printf("%d ", arr[i]);
                pos += arr[i];
            }
        }
        printf("\n");
        printf("Tổng các phần tử chẵn là: %d", pos);
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

        case 4:
        int x = 0, y = 0;;
        if(n == 0){
                printf("invalid\n");
                goto menu1;
        }
         for(int i = 0; i < n; i ++){
            if(arr[x] < arr[i]){
                x = i;
            }else if(arr[y] > arr[i]){
                y = i;
            }
        }
        printf("Phần tử lớn nhất là: %d\n", arr[x]);
        printf("Phần tử nhỏ nhất là: %d\n", arr[y]);
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
        while(y <= arr[n -1]){
        x = 0;
        for(int i = 0; i <= arr[y]; i++){
            if(arr[y] % i == 0){
                x++;
            }
        }
        if(x == 2){
            printf("%d", arr[y]);
        }
        y++;
        }
        break;


        case 6:
        
        break;


        case 7:
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


        case 8:
        
        break;



    }
    return 0;
}
