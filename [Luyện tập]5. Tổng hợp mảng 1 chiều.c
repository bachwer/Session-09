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
    if(menu > 9 || menu < 0){
        printf("   ---invalid---\n");
    }}while(menu > 9 || menu < 0);
    
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
        goto menu1;
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
        goto menu1;
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
        goto menu1;
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
        goto menu1;
        break;
        
        case 5:
        pos = 0;
        int num;
        if(n == 0){
                printf("invalid\n");
                goto menu1;
        } 
        y = 0;
     while(y < n + 1){
        num = arr[y];
        x = 0;
        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                x++;
            }
        }
        if(x == 2){
          printf("%d ", num);
          pos += num;
        }
        y++;
        };
        printf("\n");
        printf("Tổng là: %d", pos );
        printf("\n");
        goto menu1;
        break;
        case 6:
        num = 0;
        if(n == 0){
                printf("invalid\n");
                goto menu1;
        }
        printf("Nhập giá trị cần Ktra: ");
        scanf("%d", &pos);
        for(int i = 0; i < n; i++){
            if(arr[i] == pos){
                num += 1;
            }
        }
        if(num == 0){
            printf("Không có phần tử nào");
        }else{
            printf("Có %d phần tử đó", num);
        } 
        printf("\n");
        goto menu1;
        break;
        case 7:
        if(n == 0){
                printf("invalid\n");
                goto menu1;
        }
        printf("--Các phần tử có trong mảng--\n");    
        for(int i = 0; i < n ; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        printf("Nhập vào vị trí muốn thêm: ");
        scanf("%d", &pos);
        pos--;
        arr[n + 1];
        for(int i = n; i >= pos ; i--){
            arr[i + 1] = arr[i];
        }
        printf("Giá trị muốn thêm: ");
        scanf("%d", &arr[pos]);
        for(int i = 0; i < n + 1 ; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
       goto menu1;
        break;


        case 8:
        printf("Đã thoát !!\n");
        return 0;
        break;
    }
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
    return 0;
}
