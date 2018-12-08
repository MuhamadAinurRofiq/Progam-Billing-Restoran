#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    int makanan,minuman,porsi1,porsi2,pilihan1,pilihan2,sub_total1,sub_total2,pembayaran,kembalian,total;
    int a=10000,b=15000,c=7000,d=3000,e=5000,f=10000;

    cout<< "\n===============================================================================\n";
    cout<< "\t\t\t+++#-DAFTAR MENU-#+++" <<endl;
    cout<< "\n => MAKANAN <=                                    => MINUMAN <=\n"<<endl;
    cout<< "1. Sate Jamur       : Rp. 10.000                1. Es Teh     : Rp.  3.000"<<endl;
    cout<< "2. Sate Ayam        : Rp. 15.000                2. Es jeruk   : Rp.  5.000"<<endl;
    cout<< "3. Sate Kere        : Rp.  7.000                3. Jus Alpukat: Rp. 10.000"<<endl;
    cout<< "\n===============================================================================\n";

    pilihan1 :
        {
            cout<< "\nMasukkan nomer makanan yang ingin anda pesan : "; cin>>makanan;
            cout<< "Berapa porsi                                 : "; cin>>porsi1;

            switch (makanan)
            {
            case 1:
                cout<< "\n1.Sate Jamur      = Rp. 10000 "<<endl;
                sub_total1=a*porsi1;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total         = Rp. "<<sub_total1<<endl;
                break;
            case 2:
                cout<< "\n2.Sate Ayam      = Rp. 15000 "<<endl;
                sub_total1=b*porsi1;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total        = Rp. "<<sub_total1<<endl;
                break;
            case 3:
                cout<< "\n3.Sate Kere      = Rp.  7000 "<<endl;
                sub_total1=c*porsi1;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total        = Rp. "<<sub_total1<<endl;
                break;
            default :
                cout<< "\nPilihan yang anda masukkan belum tersedia, Mohon masukkan pilihan anda kembali"<<endl;
                goto pilihan1;

            }
        }

        pilihan2 :
            {
                cout<< "\nMasukkan nomer minuman yang ingin anda pesan : "; cin>>minuman;
            cout<< "Berapa porsi                                 : "; cin>>porsi2;
            switch (minuman)
            {
            case 1:
                cout<< "\n1.Es Teh      = Rp.  3000 "<<endl;
                sub_total2=d*porsi2;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total     = Rp. "<<sub_total2<<endl;
                break;
            case 2:
                cout<< "\n2.Es Jeruk      = Rp.  5000 "<<endl;
                sub_total2=e*porsi2;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total       = Rp. "<<sub_total2<<endl;
                break;
            case 3:
                cout<< "\n3.Jus Alpukat      = Rp. 10000 "<<endl;
                sub_total2=f*porsi2;
                cout<< "------------------------------"<<endl;
                cout<< "Sub Total          = Rp. "<<sub_total2<<endl;
                break;
            default :
                cout<< "\nMaaf pilihan yang anda masukkan belum tersedia, Silahkan masukkan pilihan anda kembali"<<endl;
                goto pilihan2;
            }

            }

        cout<< "\n================================================================================\n"<<endl;
        total=sub_total1+sub_total2;
        cout<< "\nJumlah total belanjaan anda adalah        : Rp. "<<total;
        cout<< "\nJumlah uang pembayaran                    : Rp. "; cin>>pembayaran;
        cout<< "\n--------------------------------------------------------------------------------\n";
        kembalian=pembayaran-total;
        cout<< "Kembaliannya adalah                       : Rp. "<<kembalian<<endl;
        cout<< "\n\n               # TERIMAKASIH SUDAH BERBELANJA DIWARUNG KAMI # \n"<<endl;
        cout<<endl;
        system ("cls");



cout<< "|===========================================================|"<<endl;
cout<< "|               # WARUNG MAKAN JEJAK KAKI #                 |"<<endl;
cout<< "|===========================================================|"<<endl;
cout<< "|   Nama Produk     Porsi       Harga          Sub Total    |"<<endl;
cout<< "|===========================================================|"<<endl;
switch (makanan)
{
            case 1:
                sub_total1=a*porsi1;
                cout<< "    Sate Jamur         " <<porsi1 << "      Rp. 10000       Rp. "<<sub_total1;
                break;
            case 2:
                sub_total1=b*porsi1;
                cout<< "    Sate Ayam         " <<porsi1 << "      Rp. 15000       Rp. "<<sub_total1;
                break;
            case 3:
                sub_total1=c*porsi1;
                cout<< "    Sate Kere          " <<porsi1 << "      Rp.  7000       Rp. "<<sub_total1;
                break;
}

switch (minuman)
{
            case 1:
                sub_total2=d*porsi2;
                cout<< "\n     Es Teh\t       " <<porsi2 << "      Rp.  3000       Rp. "<<sub_total2;
                break;
             case 2:
                sub_total2=e*porsi2;
                cout<< "\n     Es Jeruk\t      " <<porsi2 << "      Rp.  5000       Rp. "<<sub_total2;
                break;
             case 3:
                sub_total2=f*porsi2;
                cout<< "\n   Jus Alpukat\t       " <<porsi2 << "      Rp. 10000       Rp. "<<sub_total2;
                break;
}
cout<< "\n|-----------------------------------------------------------|\n";
cout<< "\n   Total Pembayaran\t\t\t     Rp. "<<total<<endl;
cout<< "   Jumlah uang yang dibayarkan\t\t     Rp. "<<pembayaran<<endl;
cout<< "\n|-----------------------------------------------------------|\n";
cout<< "\n   Uang Kembaliannya\t\t\t     Rp. "<<kembalian<<endl;
cout<< "\n\n    --+#- TERIMAKASIH TELAH MAMPIR KE WARUNG KAMI +#--"<<endl;
cout<< "\n|-----------------------------------------------------------|";

getch();

}
