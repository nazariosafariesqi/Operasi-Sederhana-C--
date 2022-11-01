#include <iostream>
#include <math.h>
using namespace std;

int main (){
    
	int pilih;
	double p0,Xp,hasil;
	double kb,g,Mr,P,hasil2;
	double kf,hasil3;
    
    cout << "Nazario Safariesqi Tyo Widjaya 1941720233"<<endl;
    cout<<"Pilihan Program Perhitungan Materi KIMIA"<<endl;
    
	string menu[] = {"1.Penurunan Tekanan Uap","2.Kenaikan Titik Didih","3.Penurunan Titik Beku "};
	
	for (int i = 0; i < 3; i++) {
    cout<<((i-2) + "" + menu[i])<<endl;
    }
    
    cout<<"Pilih : "<<endl;
    cin>>pilih;
    
    switch(pilih){
    	case 1 :
    	cout<<"Masukkan Tekanan Pelarut Murni (mmHg): "<<endl;
    	cin >>p0;
    	cout<<"Masukkan Mol Zat Pelarut (gr/mol): "<<endl;
    	cin >>Xp;
    	hasil = p0*Xp;
    	cout<<"Hasilnya : "<<hasil<<" mmHg"<<endl;
    	break;
    	
		case 2 :
    	cout<<"Masukkan Kenaikan Titik Didih(kg/mol) : "<<endl;
    	cin >>kb;
    	cout<<"Banyaknya Gram Larutan(gr) :"<<endl;
    	cin >>g;
    	cout<<"Masukkan Massa Molekul Relatif(Mr) :"<<endl;
    	cin >>Mr;
    	cout<<"Masukkan jumlah massa zat(kg) :"<<endl;
    	cin >>P;
    	hasil2 = kb*(g/Mr*1000/P);
    	cout<<"Hasilnya : "<<hasil2<<" derajat C"endl;
    	break;
    	
		case 3 :
		cout<<"Masukkan Perubahan Titik Beku(kg/mol) :"<<endl;
		cin >>kf;
		cout<<"Banyaknya Gram Larutan(gr) :"<<endl;
    	cin >>g;
    	cout<<"Masukkan Massa Molekul Relatif(Mr) :"<<endl;
    	cin >>Mr;
    	cout<<"Masukkan jumlah massa zat(kg) :"<<endl;
    	cin >>P;
    	hasil3 = kf*(g/Mr*1000/P);
    	cout<<"Hasilnya : "<<hasil3<<" derajat C"endl;
    	break;
    	
    	default:
    	cout<<"Input Yang Anda Masukkan Salah !"<<endl;
    }
	}