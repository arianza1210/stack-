#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

node *head = NULL;

void isi(int variable) {
	node *baru = new node;
	baru->data = variable;
	baru->next = head;
	head = baru;
}

void hapus() {
	if (head == '\0') {
		cout<<"Stack kosong!\n";
	}
	else {
		cout<<endl<<"Data "<<head->data<<" terhapus.\n";
		head = head->next;
	}
}

void tampil () {
	node *bantu = head;
	cout<<"\nElemen di stack:\n";
	while (bantu != NULL) {
		cout<<bantu->data<<endl;
		bantu = bantu->next;
	}
}

int main () {
	int pil, n;
	do {
	if (head != NULL) 
		tampil();
		
		

	cout<<"=============================="<<endl;
	cout<<"nama : pandi barep arianza    "<<endl;
	cout<<"npm  : 1817051002 "<<endl;
	cout<<"=============================="<<endl;	
	cout<<"\n1. Isi"<<endl;
	cout<<"2. Hapus"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<"Pilih: "; cin>>pil;
	cout<<endl;
	switch (pil) {
		case 1:
			cout<<"Isi data: "; cin>>n;
			isi(n);
			break;
		
		case 2:
			hapus();
			break;
			
		case 3:
			cout<<"\nBye! dibuat oleh : pandi barep arianza :)";
			break;
		
		default:
			cout<<"\n Pilihan tidak tersedia.\n";		
		}
	}while (pil != 3);
	return 0;	
}
