// bai 1 for
 
#include <iostream.h>
int main(int argc, char *argv[])
{
	int n ;
	cout << " nhap n :";
	cin >> n;
	long p = 1;
	for ( int i = 2 ; i <= 2*n ; i+=2 )
       	p *= i;
	cout << "Tich cua p = 2*4*6*...2n =" << p << endl;
 
	return 0;
}