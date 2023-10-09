#include<bits/stdc++.h>
using namespace std;
string cekpw = "09-11-2022", pw;
char lanjut;
int pilih;

void teks_perintah(){
cout << "y = Menu\n";
cout << "n = End program\n";
cout << "Masukkan perintah : ";
}

void pesanr(){
system("cls");
cout << "Halo sayangku, kamu suka gak sama kodingan aku sayang ?\nAku masih pemula jadi gabisa terlalu bagus, hehe. Seharusnya bisa lebih bagus kalau ga pake c++ sayang, maaf ya, nanti aku belajar bahasa lain.\n";
cout << "Sayang, aku punya 1 kalimat buat kamu, mungkin pendek, tapi makanya sangat dalam bagi pacarmu ini sayang.\n";
cout << "I LOVE YOU\n\n\n";
teks_perintah();
cin >> lanjut;
}

void lope(){
int n;
char lopelagi = 'y';
while(lopelagi == 'y'){
cout << "Berapa kali lope lope sayang ? ";
cin >> n;
cout << endl << endl;
n *= 6;
for(int j=1; j<n; j++){
int i = j;
i %= 6;
switch (i){
case 0:
	cout << endl << endl;
break;
case 1:
	cout << ",d88b.d88b," << endl;
break;
case 2:
	cout << "88888888888" << endl;
break;
case 3:
	cout << "`Y AYANG Y'" << endl;
case 4:
	cout << "  `Y888Y'" << endl;
break;
case 5:
	cout << "    `Y'" << endl;
break;
}}
cout << endl << "Mau lope lagi gak sayang (y/n)  ?  ";
cin >> lopelagi;
system("cls");
}
teks_perintah();
cin >> lanjut;
}

void uwu(){
string teks;
int jumlah;
system("cls");
cout << "Ketik teks  apapun (bebas) : ";
cin.get();
getline(cin, teks);
cout << "Ketik angka apapun (bebas) : ";
cin >> jumlah;
for(int i=1; i<=jumlah; i++){
cout << i << ".  " << teks << endl;
}
cout << "Sudah sayang\n";
system("pause");
teks_perintah();
cin >> lanjut;
}

void ttdo(){
do{
system("cls");
cout << "Apa yang mau pacar aku lakukan di hati ini ?\n";
cout << "1. Pesan rahasia untuk pacar\n";
cout << "2. Lope lope bilqhis sayang\n";
cout << "3. UwU debest hehe\n";
cin >> pilih;
} while (pilih <1 or pilih >3);
switch(pilih){
case 1:
	pesanr();
break;
case 2:
	lope();
break;
case 3:
	uwu();
break;
}}

void pilihan(){
cout << "Password anda benar, apakah anda ingin melanjutkan ?  (y/n)";
cin >> lanjut;
}

int main(){

do{
system("cls");
cout << "Selamat datang di ruang hati kita.\nSebelum melanjutkan silahkan masukkan Password kunci hati terlebih dahulu\n";
cout << "Password Hati kita  : ";
getline (cin,pw);
} while (pw != cekpw);

pilihan();
while(lanjut == 'y'){
ttdo();
} if(lanjut == 'n'){
cout << "Dadah sayang, sampai ketemu lagi diruang hati kita...";
} else {
cout << "Kamu salah sayang, harusnya y/n\nUdah ya, ulang lagi dari awal";
}
return 0;
}

