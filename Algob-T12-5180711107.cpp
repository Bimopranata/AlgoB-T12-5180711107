#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
 main()
 {
 	struct pemain{
 		int transfer;
 		char nama[10];

	 };
	 pemain timnas[10];
	 pemain temp;
	 int i,b,ketemu,ganti,baru,a,n;
	 int c,z,y,x,m;
	 string cari,ban;
	 cout<<"Selamat datang di Seri A\n";

	 cout<<"Data Pemain Timnas"<<endl;

	 cout<<"\nMasukan jumlah pemain:";cin>>n;
	for(int i=1;i<=n;++i){
		cout<<"Masukan nama pemain ke-"<<i<<":";cin>>timnas[i].nama;
		cout<<"Masukan harga transfer pemain ke-"<<i<<":";cin>>timnas[i].transfer;
		cout<<endl;
		}
	for(int i=1;i<=n;i++)
	{
		cout<<"\nNama Pemain ke-"<<i<<":"<<timnas[i].nama;
		cout<<"\nHarga transfer Pemain ke-"<<i<<":"<<timnas[i].transfer;
	}system("CLS");
	for(int i=1;i<=n;i++)
	{
		for(b=1;b<=n-1;++b)
		{
            if(timnas[b].transfer > timnas[b+1].transfer)
            {
                temp.transfer=timnas[b].transfer;
                timnas[b].transfer=timnas[b+1].transfer;
                timnas[b+1].transfer=temp.transfer;

                strcpy(temp.nama,timnas[b].nama);
                strcpy(timnas[b].nama,timnas[b+1].nama);
                strcpy(timnas[b+1].nama,temp.nama);
            }
		}
	}
	cout<<endl;
	cout<<"\n==============================================";
	for(int i=1;i<=n;++i)
	{
		cout<<"\nNama Pemain ke-"<<i<<":"<<timnas[i].nama;
		cout<<"\nharga transfer ke-"<<i<<":"<<timnas[i].transfer;

	}
	cout<<"\nMasukan Nama Pemain Yang dicari:";
	cin>>cari;
	ketemu=0;
	for(int i=1;i<=n;i++)

	if(timnas[i].nama==cari)
	{
	ketemu=1;
	cout<<"================================================";
	cout<<"\nNama Pemain Terdapat pada indeks ke-"<<i;
	cout<<"\n================================================";
	}
	if(ketemu=0)
    {
		cout<<"Nama yang dicari tidak ditemukan";
    }cout<<endl;

    cout<<"\nMusim transfer baru";

    cout<<"\nMasukan Index Nama Pemain Yang Ingin Diganti:";
    cin>>ganti;
    cout<<"\nMasukan harga transfer Baru:";
    cin>>baru;
    a=ganti;
    timnas[a].transfer=baru;
    cout<<"\n================================================";
    cout<<"\nData Pemain Setelah Diganti:";
	for(int c=1;c<=n;c++)
	{
	cout<<"\nNama Pemain ke-"<<c<<":"<<timnas[c].nama;
	cout<<"\nHarga transfer ke-"<<c<<":"<<timnas[c].transfer;
	}
	cout<<"\n================================================";
	cout<<endl;
	cout<<"\n-------------------------------------------------";
	cout<<"\nPecat Pemain";
	cout<<"\nMasukan Nama Pemain Yang Ingin Dihapus:";
	cin>>ban;
	for(int x=0; x<=n; x++)
	{   if(ban == timnas[x].nama)
        {
            for(int z=x; z<=n;z++)
            {
                timnas[z].nama==timnas[z+1].nama;
            }
            n-=1;
        }
	}

 cout<<"\nData Baru";
 for(int y=1;y<=n;y++)
 {
 	cout<<"\nNama Pemain ke-"<<y<<":"<<timnas[y].nama;
	cout<<"\nHarga transfer Pemain ke-"<<y<<":"<<timnas[y].transfer;
 }
 }
