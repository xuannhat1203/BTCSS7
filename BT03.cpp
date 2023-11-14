#include <stdio.h>

int main() {
    float tienGuiBanDau, laiSuat, soThangGui;
    
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &tienGuiBanDau);
    
    printf("Nhap lai suat nam: ");
    scanf("%f", &laiSuat);
    
    printf("Nhap so thang gui: ");
    scanf("%f", &soThangGui);
    
    float lai = (tienGuiBanDau * laiSuat * soThangGui) / (12 * 100);
    float tienNhanDuoc = tienGuiBanDau + lai;
    
    printf("So tien lai: %.2f\n", lai);
    printf("So tien nhan duoc sau thoi gian gui: %.2f\n", tienNhanDuoc);
    
    return 0;
}
