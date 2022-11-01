#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int angka;
    
    cout<<"Pilih : "<<endl;
    cin>>angka;
    cout<<"------------------"<<endl;
	for (int i = 1; i < angka; i++) {
    	for (int j = i; j < angka-1; i--){
    		cout<<" * "<<endl;
				for (int k = j; k < angka-2; i--){
					cout<<" *"<<endl;
 			}
    	}
	}
}