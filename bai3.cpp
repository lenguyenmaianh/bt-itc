// bai 2 for
 
#include <iostream.h>
int main(int argc, char *argv[])
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout <<" ve tam giac : " << endl;
	for(int i = n; i >= 1; i--) {
      for(int j = 1; j <= i; j++){
	    cout << " * ";
     }
	    cout << endl;
 
     }
	return 0;