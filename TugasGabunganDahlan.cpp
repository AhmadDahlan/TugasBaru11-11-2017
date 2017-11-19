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
		case 3:
		cout <<"Perhitungan Berat Badan\n";
		cout <<"Masukkan Berat Badan : ";cin >>berat;
		cout <<"Masukkan Tinggi Badan : ";cin >>Tinggi;
	
		cout <<"Hasil \n";
		cout <<"Berat badan : "<<berat<<endl;
		cout <<"Tinggi badan : "<<Tinggi<<endl;
	
		if (berat<Tinggi/2.5){
		cout <<"Anda Underweight";
		}else if (Tinggi/2.3<berat){
		cout <<"Anda Overweight";
		}else if (Tinggi/2.5 <=berat <=Tinggi/2.3){
		cout <<"Anda Normal";
		}
		cout<<"\n";
		cout<<"Apakah Anda Ingin Kembali ? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih Telah Menggunakan Program Ini\n";
		cout<<"Jika Ingin Keluar Tekan Enter"<<endl;
		break;
		case 4:
		cout <<"Masukkan Nilai : ";cin >>x;
	
		if (x>0){
		cout <<"Nilai Ini Adalah Positif";
		}else if (x<0){
		cout <<"Nilai Ini Adalah Negatif";
		}else {
		cout <<"Nilai Ini Adalah Nol";
		}
		cout<<"\n";
		cout<<"Apakah Anda Ingin Kembali ? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih Telah Menggunakan Program Ini\n";
		cout<<"Jika Ingin Keluar Tekan Enter"<<endl;
		break;
		case 5:
		cout <<"Perhitungan Gaji Karyawan "<<endl;
		cout <<"Masukkan Gaji Pokok : Rp. ";cin >>gpkk;
		cout <<"Masukkan Jam Kerja : ";cin >>jk;
		lbr=jk-40;
		gt=(lbr*1.5+40)*gpkk;
		pjk=gt*0.15;
		gk=gt-pjk;
	
		cout <<"Hasil Perhitungan Gaji"<<endl;
		cout <<"Gaji Pokok	: Rp. "<<gpkk<<endl;
		cout <<"Jam Kerja 	: "<<jk<<endl;
		cout <<"Jam Lembur	: "<<lbr<<endl;
		cout <<"Gaji sebelum dipotong pajak : Rp. "<<gt<<endl;
		cout <<"Total Gaji 	: Rp. "<<gk;
		cout<<"\n";
		cout<<"Apakah Anda Ingin Kembali ? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih Telah Menggunakan Program Ini\n";
		cout<<"Jika Ingin Keluar Tekan Enter"<<endl;
}
}

