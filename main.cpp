#include <iostream>

using namespace std;

int main()
{
    int kd=1,harga,barang,total=0;
    bool state=true;
    char lagi;
    cout <<"________________________________"<<endl;

    cout <<"______TOKO DUA BERSAUDARA________"<<endl;

    cout <<"________________________________"<<endl;

    while(state==true){

        cout <<"kade barang :kd-00"<<kd<<endl;
        kd++;
        cout <<"harga barang tersebut :"<<endl;
        cin >>harga;
        cout <<"jumlah barang tersebut :"<<endl;
        cin >>barang;
        cout <<"apakah anda masih memiliki belanjaan lain (y/n) :"<<endl;
        cin>>lagi;

        if (lagi =='y'){
            state = true;
        }
        else if(lagi=='n'){
            state = false;
        }

         total+=harga*barang;

    }
    cout <<"total belanjaan anda adalah :RP."<<total<<endl;
    return 0;
}
