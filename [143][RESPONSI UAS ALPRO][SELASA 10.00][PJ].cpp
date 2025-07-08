#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

struct produk{
	string nama[10];
	int id[10];
	int stok[10];
	double harga[10];
};

struct inti{
	int pilihan;
	int item;
};

void input(){
	cout<<"= = = = = input produk = = = = =\n";
	inti k;
	int i;
	ofstream file("data.txt", ios::app);
	produk p;
	if(file){
		cout<<"Masukkan id : ";
		cin>>p.id[i];
		
		cout<<"Masukkan nama : ";
		cin>>p.nama[i];
		
		cout<<"Masukkan stok : ";
		cin>>p.stok[i];
		
		cout<<"Masukkan harga : ";
		cin>>p.harga[i];
		
		file<<p.id[i]<<'\n';
		file<<p.nama[i]<<'\n';
		file<<p.stok[i]<<'\n';
		file<<p.harga[i]<<'\n';
		file.close();
		system("cls");
	}
	k.item++;
	i++;
	cout<<"\nData tersimpan\n";
}

void tampilan(){
	produk o;
	inti u;
	cout<<"Daftar Produk : \n";
	cout<<left<<setw(5)<<"ID"<<setw(10)<<"Nama"<<setw(5)<<"Stok"<<setw(5)<<"Harga\n";
	for(int i=0; i>=u.item; i++){
		cout<<left<<setw(5)<<o.id<<setw(10)<<o.nama<<setw(5)<<o.stok<<setw(5)<<o.harga<<"\n";
	}
}

void cid(){
	cout<<"Mencari dengan ID";
	
}

void cmurah(){
	cout<<"Mencari dengan Termurah";
	
}

void cari(){
	inti i;
	do{
	cout<<"= = = = = cari produk = = = = =\n";
	cout<<"1. Mencari dengan id\n";
	cout<<"2. Mencari barang termurah\n";
	cout<<"3. Kembali\n";
	cout<<"pilih : ";
	cin>>i.pilihan;
	system("cls");
	
	switch(i.pilihan){
		case 1: 
			cid();
			break;
		case 2:
			cmurah();
			break;
		case 3:
			break;
		default:
			cout<<"\nPilihan tidak valid!\n";
			break;
		}
	}while(i.pilihan!=3);
}

void smurah(){
	cout<<"Sorting dengan harga termurah";
	
}

void stinggi(){
	cout<<"Sorting dengan harga tertinggi";
	
}

void sort(){
	inti i;
	do{
	cout<<"= = = = = sorting produk = = = = =\n";
	cout<<"1. Sorting dari harga termurah\n";
	cout<<"2. Sorting dari harga tgertinggi\n";
	cout<<"3. Kembali\n";
	cout<<"pilih : ";
	cin>>i.pilihan;
	system("cls");
	
	switch(i.pilihan){
		case 1: 
			smurah();
			break;
		case 2:
			stinggi();
			break;
		case 3:
			break;
		default:
			cout<<"\nPilihan tidak valid!\n";
			break;
		}
	}while(i.pilihan!=3);
}

void lproduk(){
	produk p;
	int id, jumlah;
	double total;
//	tampilan();
//	cout<<endl;
	cout<<"Masukkan ID produk : ";
	cin>>id;
	cout<<"Masukkan jumlah yang terjual : ";
	cin>>jumlah;
	total=jumlah*p.harga[id];
//	system("cls");
	
	cout<<"= = = = = laporan produk = = = = =\n";
	cout<<" Pemasukkan : \n";
	cout<<" "<<"Nama	"<<"Harga	"<<"Jumlah	"<<"\n";
	cout<<" "<<*p.nama<<"	"<<*p.harga<<"	"<<jumlah<<endl;
	cout<<endl<<"Total pemasukkan sebesar : "<<total;
}

void lseluruh(){
	cout<<"Sorting dengan harga tertinggi";
	
}

void laporan(){
	cout<<"= = = = = laporan = = = = =\n";
	inti i;
	do{
	cout<<"1. Laporan pendapatan perproduk\n";
	cout<<"2. Laporan pendapatan keseluruhan\n";
	cout<<"3. Kembali\n";
	cout<<"pilih : ";
	cin>>i.pilihan;
	system("cls");
	
	switch(i.pilihan){
		case 1: 
			lproduk();
			break;
		case 2:
			lseluruh();
			break;
		case 3:
			break;
		default:
			cout<<"\nPilihan tidak valid!\n";
			break;
		}
	}while(i.pilihan!=3);
}

int main(){
	inti i;
	produk p;
	
	do{
	cout<<"= = = = = PENJUALAN TOKO = = = = =\n\n";
	
	cout<<"Menu : \n";
	cout<<"1. Input produk\n";
	cout<<"2. Cari produk\n";
	cout<<"3. Sorting produk\n";
	cout<<"4. Laporan\n";
	cout<<"5. Keluar\n";
	cout<<"Pilih : ";
	cin>>i.pilihan;
	system("cls");
	
	switch(i.pilihan){
		case 1: 
			input();
			break;
		case 2:
			cari();
			break;
		case 3:
			sort();
			break;
		case 4:
			laporan();
			break;
		case 5:
			break;
		default:
			cout<<"Pililhan anda tidak valid\n";
			break;
	}
	} while(i.pilihan!=5);
	
	cout<<"\n~~~ Terima kasih ~~~";
	
	return 0;
}
