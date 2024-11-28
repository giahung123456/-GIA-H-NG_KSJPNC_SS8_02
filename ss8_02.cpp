#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int so , kt = 0;

    
    printf("Nhap vao mot phan tu can tim: ");
    scanf("%d", &so);

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == so) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            kt = 1;
            
        }
    }

    
    if (!kt) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}