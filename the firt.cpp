
#include"stdio.h"
int main(){
int a[100];
int n;
printf("Nhap so luong phan tu n = ");
scanf("%d",&n);
int *N;
int *A;
N=&n;
A=a;
for(int i=0;i<*N;i++){
printf("a[%d] = ",i);
scanf("%d",(A+i));
}
printf("Mang co gia tri la \n");
for(int i=0;i<n;i++){
printf("a[%d] = %d ",i,a[i]);
}
int min=a[0];
int max=a[0];
for(int i=0;i<n;i++){
if(a[i]<min){
min=a[i];
}
if(a[i]>max){
max=a[i];
}
}
printf("\nGia tri nho nhat cua day la %d \nGia tri lon nhat cua day la %d",min,max);
}


