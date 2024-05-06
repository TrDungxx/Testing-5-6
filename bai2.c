//
// Created by Nguyễn Trung Dũng on 5/6/2024.
//
#include <stdio.h>
float CrystalTienDien(int sokWh){
    if(sokWh<50){            // Hàm điều kiện để tính số tiền điện theo đề bài đã cho
        sokWh*= 500;
    }else if(sokWh>51 && sokWh <100){
        sokWh*= 700;
    }else if (sokWh>101){
        sokWh*= 900;
    }
    return sokWh;      // Tra ket qua về sokWh
}
int main(){
    float sokWh;
    printf("Nhap vao so kWh da su dung: \n");
    scanf("%f",&sokWh);

    float TotalPayment= CrystalTienDien(sokWh);            // Truyền vào hàm trên để tính giá tiền phải tra
    printf("Tong so tien phai thanh toan la: %.2f", TotalPayment);// Endddddddddddddddddd
}