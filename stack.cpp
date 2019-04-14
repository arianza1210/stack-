#include<iostream> 
#include<stdio.h> 
#include<conio.h> 
#define size 10 
using namespace std;
struct stack {
  int elemen[size];
  int top; 
};
typedef struct stack STACK; 


void push(STACK *p,int value){
  if(p->top==size-1)
   cout<<"STACK penuh ";
  else
   p->elemen[++p->top]=value; 
}

int pop(STACK *p)  {
if (p->top==-1)  
{
   cout<<"STACK kosong";
   return -1;
  }
  else
   return p->elemen[p->top--];
}

void tampilan (STACK *p) {
  int i;
  if(p->top==-1)
   cout<<"\n STACK kosong\n";
  else
   cout<<"\nIsi STACK adalah : \n";
   for (i=p->top;i>=0; --i)
    cout<<p->elemen[i]<<"\n"; 
}

int main() {
  STACK s ;
  int x,c,i;
  s.top=-1;
  do
  {
   cout<<"MENU PILIHAN"<<endl;
   cout<<"1: Operasi PUSH"<<endl;
   cout<<"2: Operasi POP"<<endl;
   cout<<"3: Tampilkan Stack"<<endl;
   cout<<"4: Hapus Stack"<<endl;
   cout<<"5: Keluar"<<endl;
   cout<<" Pilihan anda : ";cin>>c;
   switch(c)   {
    case 1:  cout<<"\nMasukkan Elemen Stack: ";cin>>x;
             push (&s,x);
               tampilan(&s);
     break;
     
    case 2:  x=pop(&s);
     if(x!=-1)
      cout<<"\nMenghapus Element = "<<x;
     break;
     
    case 3: tampilan(&s);
     break;
     
    case 4:
    if(s.top==-1){
    	cout<<endl<<"STACK kosong";
	}
      
    else{
	cout<<endl<<"STACK dihapus"<<endl;
	}
    
    for (i=s.top;i>=0; --i)
      cout<<"Elemen yang dihapus adalah : "<<pop(&s)<<endl;
     s.top=-1;
     
    case 5:
    cout<<"\n-----------------------------------\n";
	cout<<"nama : pandi barep arianza "<<endl;
   	cout<<"npm : 1817051002"<<endl;  
   	 cout<<"\n-----------------------------------\n";
   }
   
       getch();

  }
while(c!=5); 
} 
