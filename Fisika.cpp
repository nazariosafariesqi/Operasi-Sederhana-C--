#include <iostream>
#include <math.h>
using namespace std;

int main (){
    
	int pilih;
	double E,lamda;
	double h = 4.136*(10^-15);
	double c = 299.79;
	double q1,q2,r,Fc;
	double k = 9*(10^9);
    
    cout << "Nazario Safariesqi Tyo Widjaya 1941720233"<<endl;
    cout<<"Pilihan Program Perhitungan Materi FISIKA"<<endl;
    
	string menu[] = {"1.Menghitung Energi Foton","2.Menghitung Gaya Coulomb"};
	
	for (int i = 0; i < 2; i++) {
    cout<<((i-1) + "" + menu[i])<<endl;
    }
    
    cout<<"Pilih : "<<endl;
    cin>>pilih;
    
    switch(pilih){
    	case 1 :
    	cout<<"Masukkan Panjang Gelombang : "<<endl;
    	cin >>lamda;
    	E = c*h/lamda;
    	cout<<"Hasilnya : "<<E<<" eV"<<endl;
    	break;
    	
		case 2 :
    	cout<<"Masukkan Q1(coulomb) : "<<endl;
    	cin >>q1;
    	cout<<"Masukkan Q2(coulomb) :"<<endl;
    	cin >>q2;
    	cout<<"Jarak antara Q1 & Q2(m) :"<<endl;
    	cin >>r;
    	Fc = k*q1*q2/(r*r);
    	cout<<"Hasilnya : "<<Fc<<" Newton"<<endl;
    	break;
    	
    	default:
    	cout<<"Input Yang Anda Masukkan Salah !"<<endl;
    }
}