#include <iostream>
using namespace std;

int main() {
	// defining variables, with the values of t1 and tlast
  	int i, n, t1=0,tlast=1,fn;
	
	// taking input
	cout << "Enter the value for n: ";
	cin >> n;
	cout << "\nThe Fibonacci Series for first " << n << " numbers is:" << endl;
	cout << "-----------------------"<<"\n";
// checkinf if-else-if condition to take valid input only
	if (n <= 0) {
		cout << "Invalid input";
	}
	else if(n == 1){
		cout << 0 <<"\n";
	}
	else if(n ==2){
		cout << 0 << "\n" << 1 <<"\n";
	}
	else{
		cout << t1 << " \n" << tlast <<"\n";
	
		// determining the n numbers of the list using for loop
	  	for (i = 2; i < n; ++i){
			// doing sum of first term and the second term
	  		fn = tlast + t1;
			cout << fn <<"\n";
			
			// equalating the last term from its first term and last term to list of the end term
			t1 = tlast;
			tlast = fn;
		}
	}
	
    return 0;
}