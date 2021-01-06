#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n;
	int e[20];
	n=4;
	cout <<"El arreglo enteros es: \n" ;
	for(i=0;n<=14;i=i+1){
	    e[i]=n;
	    n=n+1;
		cout <<e[i] <<"\n";
		}
	return 0;
}
