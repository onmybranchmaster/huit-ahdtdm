#include <stdio.h>

int bool ktSoChinhPhuong(int n) {
    if (n > 3)
	{
		int a = sqrt((double)n);
		if (a*a == x)
			return true;
		else
		    return false;
	}
	else
		return false;
}

int demSoChinhPhuong(int n) {
    int dem = 0;

    for (int i = 1; i * i <= n; i++) {
        dem++;
    }

    return dem;
}

int main(void){
    int n = 0;
    printf("Nhap n = ");
    do {
        scanf("%d", &n);
    } while(n <= 0);
    
    for (int i = 1; i * i <= n; i++) {
        printf("%d", i);
    }
    printf("\n");
    printf("so luong so chinh phuong la %d", demSoChinhPhuong(n));
}

