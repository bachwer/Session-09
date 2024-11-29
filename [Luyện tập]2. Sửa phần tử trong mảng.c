#include <stdio.h>

int main () {
    int array[10]= {2,4,6,8,10,12,14,16,18, 20};
    int vitri;
    int number;
       printf("phan tu mang ban dau:");
    for (int i=0;i< 10;i++) {
         printf("%d\n", array[i]);
        
    }
   
         printf("Nhap vi tri:");
         scanf("%d", &vitri);
         vitri--;
         
    if(vitri<0 || vitri>10) {
        printf("Khong hop le");
        return 1;
    }
    
    for (int i=0 ; i < 10; i++){
        if (i == vitri){
            printf("Nhap gia tri\n");
            scanf("%d",&number);
            array[i] = number;
    } 
}   for (int i=0;i< 10;i++) {
         printf("%d\n", array[i]);
        
    }
   
return 0;
}
