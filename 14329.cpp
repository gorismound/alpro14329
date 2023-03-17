#include <iostream>
using namespace std;

int a,b;
int x,y;
int hasil,hasil1,hasil2,hasil3;

void tambah()
{



cout << "Pertambahan"<<endl;
cout << "Masukkan angka pertama : ";
cin >> a;
cout << "Masukkan angka kedua : ";
cin >> b;

hasil1 = a+b;
cout <<"Hasilnya : "<<hasil1<<endl<<endl;
}

void kurang()
{
    cout << "Perkurangan"<<endl;
cout << "Masukkan angka pertama : ";
cin >> x;
cout << "Masukkan angka kedua : ";
cin >> y;

hasil2 = x-y;
cout <<"Hasilnya : "<<hasil2<<endl<<endl;
}

int myfunction(int myArr[],int size)
{
    int sum = 0;
    for (int i =0;i<size;i++)
    {
        sum += myArr[i];
    }
    return sum;
}

float avg(int myArr[],int size) {
    float sum = 0;
    for (int i = 0;i < size;i++) {
        sum += myArr[i];
    }
    float average = sum / size;
    return average;
}
int main ()
{
    tambah();
    kurang();
    int myArr[]={1,2,3,4,5};
    cout << myfunction(myArr,5) << endl;
    cout << avg(myArr,5) << endl;
}
