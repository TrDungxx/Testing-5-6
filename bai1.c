////
//// Created by Nguyễn Trung Dũng on 5/6/2024.
////
//#include <stdio.h>
//int MinValueArr(int arr[], int size) {
//    int min=arr[0];
//    for(int i=0;i<size;i++){  // câu điều kien trong hàm
//        if(arr[i]<min){
//            min=arr[i];
//        }
//    }
//    return min;
//}
//int main(){
//    int n;
//    printf("Nhap vao mang so luong phan tu: \n"); //Khai báo so lượng phần tử trong mảng
//    scanf("%d",&n);
//    int intArr[n];
//    for(int i=0; i <n;i++){
//        printf("Phan tu [%d]",i+1);  //Khai báo phần tử
//        scanf("%d",&intArr[i]);
//    }
//    int Minvalue = MinValueArr(intArr, n);
//
//    printf("So duong nho nhat trong mang la: %d",Minvalue); // trả kết quả tìm số nhỏ nhất trong phần tử
//}