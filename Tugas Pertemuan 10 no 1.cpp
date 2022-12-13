#include<iostream>
using namespace std;
struct Zodiak
{
    int tanggal;
    int bulan;
    double tahun;
};

int main()
{
    int jml_array;
    cout<< "Masukkan jumlah array : ";
    cin>> jml_array;
    Zodiak orang[jml_array];
    for( int i = 0; i < jml_array ; i++)
    {
        cout<< "Orang ke-"<<i+1<<endl;
        cout<< "Masukkan tanggal lahir anda: ";
        cin>>orang[i].tanggal;
        cout<< "Masukkan bulan lahir anda: ";
        cin>>orang[i].bulan;
        cout<< "Masukkan tahun lahir anda: ";
        cin>>orang[i].tahun;
    }
    cout<< "\nInformasi"<<endl;
    for( int i = 0; i < jml_array; i++)
    {
        cout<< "Orang ke-"<<i+1<<endl;
        cout<< "Tanggal Lahir = "<<orang[i].tanggal<<endl;
        cout<< "Bulan Lahir = "<<orang[i].bulan<<endl;
        cout<< "Tahun Lahir = "<<orang[i].tahun<<endl;
        if( orang[i].tanggal >= 21 && orang[i].bulan == 3 || orang[i].tanggal <= 19 && orang[i].bulan == 4)
        {
            cout<< "Zodiak = Aries"<<endl;
        }
        else if( orang[i].tanggal >= 20 && orang[i].bulan == 4 || orang[i].tanggal <= 20 && orang[i].bulan == 5)
        {
            cout<< "Zodiak = Taurus"<<endl;
        }
        else if( orang[i].tanggal >= 21 && orang[i].bulan == 5 || orang[i].tanggal <= 20 && orang[i].bulan == 6)
        {
            cout<< "Zodiak = Gemini"<<endl;
        }
        else if( orang[i].tanggal >= 21 && orang[i].bulan == 6 || orang[i].tanggal <= 22 && orang[i].bulan == 7)
        {
            cout<< "Zodiak = Cancer"<<endl;
        }
        else if( orang[i].tanggal >= 23 && orang[i].bulan == 7 || orang[i].tanggal <= 22 && orang[i].bulan == 8)
        {
            cout<< "Zodiak = Leo"<<endl;
        }
        else if( orang[i].tanggal >= 23 && orang[i].bulan == 8 || orang[i].tanggal <= 22 && orang[i].bulan == 9)
        {
            cout<< "Zodiak = Virgo"<<endl;
        }
        else if( orang[i].tanggal >= 23 && orang[i].bulan == 9 || orang[i].tanggal <= 22 && orang[i].bulan == 10)
        {
            cout<< "Zodiak = Libra"<<endl;
        }
        else if( orang[i].tanggal >= 23 && orang[i].bulan == 10 || orang[i].tanggal <= 21 && orang[i].bulan == 11)
        {
            cout<< "Zodiak = Scorpio"<<endl;
        }
        else if( orang[i].tanggal >= 22 && orang[i].bulan == 11 || orang[i].tanggal <= 21 && orang[i].bulan == 12)
        {
            cout<< "Zodiak = Sagitarius"<<endl;
        }
        else if( orang[i].tanggal >= 22 && orang[i].bulan == 12 || orang[i].tanggal <= 19 && orang[i].bulan == 1)
        {
            cout<< "Zodiak = Capricorn"<<endl;
        }
        else if( orang[i].tanggal >= 20 && orang[i].bulan == 1 || orang[i].tanggal <= 18 && orang[i].bulan == 2)
        {
            cout<< "Zodiak = Aquarius"<<endl;
        }
        else if( orang[i].tanggal >= 19 && orang[i].bulan == 2 || orang[i].tanggal <= 20 && orang[i].bulan == 3)
        {
            cout<< "Zodiak = Pisces"<<endl;
        }
        else
        {
            cout<< "Tanggal dan Bulan lahir anda tidak termasuk dalam Zodiak"<<endl;
        }
    }

    return 0;
}
