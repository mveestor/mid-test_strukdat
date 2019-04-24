/*
Nama Program		: Restoran LALALA
Nama				: Jonathan Rafma Nanda Siregar
NPM					: 140810180056
Kelas				: B
Tanggal Buat		: 24 April 2019
Deskripsi			: Pemesanan makanan
*/
#include <iostream>
using namespace std;
struct LIST{
	char* nama;
	char* jmlh1; // Omlet Rendang
	char* jmlh2; // Nasi Gila
	char* jmlh3; // Chicken Katsu
	char* jmlh4; // Ayam Geprek
	char* jmlh5; // Nasi Goreng
	LIST* next;
};
typedef LIST* panah;
typedef panah db;
void buatList(db& order){
	order = NULL;
}
void inputList(panah& pNew){
	pNew = new LIST;
	cout << "Masukkan Nama Pemesan : "; cin >> pNew->nama;
	pNew->jmlh1 = 0;
	pNew->jmlh2 = 0;
	pNew->jmlh3 = 0;
	pNew->jmlh4 = 0;
	pNew->jmlh5 = 0;
	pNew->next = NULL;
}
void viewList(db order){
	panah pHelp;
	if (order == NULL){
		cout << "Tidak ada pemesanan" << endl;
	}
	else{
		pHelp = order;
		do{
			cout << "---------------------------------------------" << endl;
			cout << "Nama Pemesan : " << pHelp->nama;
			if (pHelp->jmlh1 == 0 && pHelp->jmlh2 == 0 && pHelp->jmlh3 == 0 && pHelp->jmlh4 == 0 && pHelp->jmlh5 == 0){
				cout << "Tidak ada isi pesanan." << endl;
			} else {
				if (pHelp->jmlh1 >= 1){
					cout << "Omlet Rendang [Order: " << pHelp->jmlh1 << "]" << endl;
				}
				if (pHelp->jmlh2 >= 1){
					cout << "Nasi Gila [Order: " << pHelp->jmlh2 << "]" << endl;
				}
				if (pHelp->jmlh3 >= 1){
					cout << "Chicken Katsu [Order: " << pHelp->jmlh3 << "]" << endl;
				}
				if (pHelp->jmlh4 >= 1){
					cout << "Ayam Geprek [Order: " << pHelp->jmlh4 << "]" << endl;
				}
				if (pHelp->jmlh5 >= 1){
					cout << "Nasi Goreng [Order: " << pHelp->jmlh5 << "]" << endl;
				}
			}
			cout << "---------------------------------------------" << endl;
		}
		while(pBantu!=NULL)
	}
}
void updateList(db& order, panah pNew){
	if (order == NULL){
		cout << "Tidak ada pemesanan" << endl;
	} else {
		pNew = order;
		pNew->jmlh1 = 3;
		pNew->jmlh2 = 2;
		pNew->jmlh3 = 1;
		pNew->jmlh4 = 3;
		pNew->jmlh5 = 2;
	}
}
main(){
	cout << "Restoran Lalala." << endl;
	panah p;
	db SING;
	buatList(SING);
	inputList(p);
	updateList(SING, p);
	viewList(SING);
}
