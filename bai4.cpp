// bai 2 if- else
 
#include <iostream.h>
int main(int argc, char *argv[])
{
	int n;
	cout << " Nhap so KW dien tieu thu : ";
	cin >> n;
	int tong_tien = 1;
	if (n >= 0 && n <= 100){
		tong_tien = n*2000;
   }else if (n >= 101 && n <= 200){
		tong_tien = n*2500;
   }else if (n >= 201 && n <= 300){
		tong_tien = n*3000;
   }else{
		tong_tien = n*5000;
  }
	cout << " Tong so tien dien la : "<< tong_tien << endl;
		return 0;
}