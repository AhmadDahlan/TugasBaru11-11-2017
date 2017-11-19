#include <iostream>
using namespace std;

int main(){
	int panjang, lebar, luas ,pilihan, alas, tinggi;
	int gpkk,jk;
	int lbr,gt,pjk,gk;
	int w,X,y;
	int x;
	double Tinggi, berat, p,l,a,t,L;
	char yt, bidang;
	atas:
	
	cout <<"1.Perhitungan Persegi Panjang Dan Segitiga\n";
	cout <<"2.Perhitungan Absolute\n";
	cout <<"3.Perhitungan Berat Badan\n";
	cout <<"4.Penentuan Nilai\n";
	cout <<"5.Perhitungan Gaji Karyawan\n";
	cout <<"Masukan Pilihan Hitungan Yang Anda Inginkan =";cin >>pilihan;
	
	switch(pilihan){
		case 1:
	cout << "Pilih Bidang [P/S] : ";
	cin >> bidang;

	if (bidang == 'P' || bidang == 'p') {	
		cout << "   Mengitung luas persegi panjang \n";	
		cout << "   Masukkan panjangnya : ";
		cin >> p;
		cout << "   Masukkan lebarnya   : ";
		cin >> l;
		L = p*l;
		cout << "   Luas persegi panjang : "<< L ;
		cout<<"\n Apakah Anda Ingin Kembali ? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih Telah Menggunakan Program Ini\n";
		cout<<"Jika Ingin Keluar Tekan Enter"<<endl;
	}
	else if (bidang == 'S' || bidang == 's') {
		cout << "   Mengitung luas segitiga \n";	
		cout << "   Masukkan alasnya   : ";
		cin >> a;
		cout << "   Masukkan tingginya : ";
		cin >> t;
		L = 0.5*a*t;
		cout << "   Luas persegi panjang : "<< L;
		cout<<"\n Apakah Anda Ingin Kembali ? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih Telah Menggunakan Program Ini\n";
		cout<<"Jika Ingin Keluar Tekan Enter"<<endl;
	}	
	else{
		cout<<"Maaf, Anda Salah Memilih"<<endl;
	}
break;
		case 2:
		cout <<"Perhitungan Selisih Nilai Absolute"<<endl;
		cout <<"Masukkan Nilai X	: ";cin>>X;
		cout <<"Masukkan Nilai Y	: ";cin>>y;
	
		if (X>y){
		w=X-y;
		}else if (y>X){
		w=y-X;
		}
		cout <<"Hasil : "<<w;
		cout<<"\n";
		cout<<"Apakah Anda Ingin Kembali ? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih Telah Menggunakan Program Ini\n";
		cout<<"Jika Ingin Keluar Tekan Enter"<<endl;
		break;
}
}

