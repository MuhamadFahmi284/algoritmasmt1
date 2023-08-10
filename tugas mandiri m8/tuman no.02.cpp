#include <iostream>
using namespace std;

int fibonacci(int n){
	if (n == 0 || n == 1){
		return n;
	}else{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}

int main(){
	int n, i, j=0;
	cout << "Masukan batas jumlah bilangan = "; cin >> n;
	for (i = 2; i <= n; i++){
		cout << "Fibonacci ke - " << i << " : " << fibonacci(j) << endl;
		j++;
	}
    return 0;
}
