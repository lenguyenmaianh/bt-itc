// bai 1 : if-else
#include <iostream.h>
int main(int argc, char *argv[])
{
	int thu ;
	cout << " nhap thu :";
	cin >> thu ;
	switch ( thu ){
	 case 1:
	 cout <<" CHU NHAT !!! " << endl;
	 break;
	 case 2:
	 cout <<" THU HAI !!! " << endl;
	 break;
	 case 3:
	 cout <<" THU BA !!! " << endl;
	 break;
	 case 4:
	 cout <<" THU TU !!! " << endl;
	 break;
	 case 5:
	 cout <<" THU NAM !!! " << endl;
	 break;
	 case 6:
	 cout <<" THU SAU !!! " << endl;
	 break;
	 case 7:
	 cout <<" THU BAY !!! " << endl;
	 break;
	 default:
	 cout << " NHAP LAI !!!"<< endl;
	 break;	
  }
	return 0;
}