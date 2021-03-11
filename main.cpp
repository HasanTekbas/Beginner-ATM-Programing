//
//  main.cpp
//  Denemeler
//
//  Created by Hasan Tekbaş on 24.12.2020.
//

#include <iostream>
#include <cstdlib>
#include "unistd.h"

using namespace std;

void Ana_Menu();
void Kayit();
void HesapBilgileri();
void ParaAktarma();
void ParaCekme();
void ParaEkleme();
void KrediBilgileri();
void Kredi();
string Bilgiler[3] = {"Hasan","Tekbas","Yok"};
float faiz[6] = {0.10, 0.30, 0.70, 1, 1.25};
int miktar[10] = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};
int a, b, islem, numb, secim=0, bakiye=0;
string name, lastname, q, krd;

inline void Karsilama()
{
    system("clear");
    cout <<"\t\t\t\tKREDID" << endl;
    cout <<"\t\t\tSistem Yükleniyor!!!" << endl;
    sleep(3);
    cout <<"\t\t\tYükleme Tamamlandı..." << endl;
    sleep(2);
    cout << "\t\t\tYetkili misiniz? [1/0]: " ;
    cin >> a;
    sleep(1);
    if( a == 1 )
    {
        string passport = "12345", sifre;
        int health = 3;
                    
            do {
                cout << "\t\t\tParola Giriniz: ";
                cin >> sifre;
                sleep(2);
                if(sifre != passport){
                        
                    cout << "\t\t\tSifre Hatal Girdiniz " << endl;
                    health = health - 1;
                    cout << "\t\t\tGiris Hakkiniz: " << health << endl;
                    sleep(1);
                    if(health == 0){
                        cout << "\t\t\tGiris Hakkiniz Doldu.." << endl;
                        sleep(2);
                        exit(EXIT_FAILURE);
                    }
                }
            } while (passport != sifre);
            cout << "\t\t\tGiris Yaptınız.." << endl;
            sleep(2);
    }
    else if (a == 0)
    {
        cout << "\t\t\t18 Yaşından Büyük müsünüz? [1/0]: " ;
        cin >> a;
        if (a == 1)
        {
            cout << "\t\t\tMaaşlı İşiniz Var mı? [1/0]: " ;
            cin >> a;
            if (a == 1)
            {
                cout << "\t\t\tKredi Borcunuz Var mı? [1/0]: " ;
                cin >> a;
                if (a == 0)
                {
                    Kayit();
                }
                else
                {
                    cout << "\t\t\tBilgileriniz Kayit Olmaniza Engel İyi Günler..." <<endl;
                    exit (EXIT_FAILURE);
                }
            }
            else
            {
                cout << "\t\t\tBilgileriniz Kayit Olmaniza Engel İyi Günler..." <<endl;
                exit (EXIT_FAILURE);
            }
        }
        else
        {
            cout << "\t\t\tBilgileriniz Kayit Olmaniza Engel İyi Günler..." <<endl;
            exit (EXIT_FAILURE);
        }
    }
}

void Kayit()
{
    cout << "\t\t\tKayit edileceksiniz..." << endl;
    sleep(2);
    cout << "\t\t\tİsminizi girin: " ;
    cin >> name;
    Bilgiler[0] = name;
    sleep(1);
    cout << "\t\t\tSoy isim girin: " ;
    cin >> lastname;
    Bilgiler[1] = lastname;
    sleep(1);
    cout << "\t\t\tKredi bilgisi girin: " ;
    cin >> krd;
    Bilgiler[2] = krd;
    sleep(1);
    cout << "\t\t\tBakiye bilgisi girin: " ;
    cin >> bakiye;
    cout << "\t\t\tSisteme giris yapiyorsunuz... " << endl;
    sleep(1);
    Ana_Menu();
}

int main()
{
    Karsilama();
    system("clear");
    Ana_Menu();

    return 0;
}

void Ana_Menu()
{
    cout <<"\t\t\t_K_R_E_D_I_D_" <<endl;
    cout <<"\t\t\t1)Hesap Bilgileri" <<endl;
    cout <<"\t\t\t2)Para Aktarma  " <<endl;
    cout <<"\t\t\t3)Para Cekme  " <<endl;
    cout <<"\t\t\t4)Para Ekleme  " <<endl;
    cout <<"\t\t\t5)Kredi Bilgileri " <<endl;
    cout <<"\t\t\tİşleminiz: ";
    cin>>secim;
    sleep(2);
    switch(secim)
        {
            case 1:
                HesapBilgileri();
                break;
            case 2:
                ParaAktarma();
                break;
            case 3:
                ParaCekme();
                break;
            case 4:
                ParaEkleme();
            case 5:
                KrediBilgileri();
                break;
            default:
                cout << "\t\t\tHatalı Seçim Yaptınız... Çıkış Yapılıyor!!!" << endl;
                sleep(3);
                cout << "________________________________________________________________________________" << endl;
        }
}

void HesapBilgileri()
{
    cout << "\t\t\tİsim: " << Bilgiler[0] << " \t\t\tSoy isim: " << Bilgiler[1] << endl;
    cout << "\t\t\tBakiye: " << bakiye << " \t\t\tKredi Kart: " << Bilgiler[2] << endl;
    cout << "\t\t\t1)Bilgileri Güncelle " << endl;
    cout << "\t\t\t2)Ana Menüye Dön" << endl;
    cout << "\t\t\t İşleminiz: " ;
    cin >> a;
    sleep(2);
    if (a == 1)
    {
        cout << "\t\t\t1)İsim" << endl;
        cout << "\t\t\t2)Soy isim" << endl;
        cout << "\t\t\t3)Kredi Kart bilgisi" << endl;
        cout << "\t\t\tHangi Bilgiyi Degistirmek Istersiniz: " ;
        cin >> a;
        sleep(2);
        if (a == 1)
        {
            cout << "\t\t\tİsim Giriniz: " ;
            cin >> Bilgiler[0];
            sleep(1);
            HesapBilgileri();
        }
        else if (a == 2)
        {
            cout << "\t\t\tSoy İsim Giriniz: " ;
            cin >> Bilgiler[1];
            sleep(1);
            HesapBilgileri();
        }
        else if (a == 3)
        {
            cout << "\t\t\tKredi Kart Bilgisi Giriniz: " ;
            cin >> Bilgiler[2];
            sleep(1);
            HesapBilgileri();
        }
        else
            cout << "\t\t\tGecersiz islem!! " << endl;
    }
    else
        sleep(1);
        Ana_Menu();
}

void ParaAktarma()
{
    cout << "\t\t\tHesaptaki Bakiye: " << bakiye << endl;
    cout << "\t\t\t1)Para Aktar " << endl;
    cout << "\t\t\t2)Menüye Dön " << endl;
    cout << "\t\t\t İşleminiz: " ;
    cin >> islem;
    
    if (islem == 1)
    {
        cout << "\t\t\tParanın yatacagı hesap numarasını giriniz: " ;
        cin >> a;
        cout << "\t\t\tYatacak tutarı girin: " ;
        cin >> b;
        bakiye = bakiye-b;
        cout << "\t\t\tHesapta kalan tutar: " << bakiye << endl;
        cout << "\t\t\tİşlem başarılı.." << endl;
        ParaAktarma();
    }
    else
    {
        Ana_Menu();
    }
}

void ParaCekme()
{
    cout << "\t\t\tHesaptaki Bakiye: " << bakiye << endl;
    cout << "\t\t\t1)Para Cek " << endl;
    cout << "\t\t\t2)Menüye Dön " << endl;
    cout << "\t\t\t İşlem Seciniz: " ;
    cin >> islem;
    
    if (islem == 1)
    {
        cout << "\t\t\tCekilecek tutarı girin: " ;
        cin >> a;
        bakiye = bakiye-a;
        cout << "\t\t\tHesapta kalan tutar: " << bakiye << endl;
        cout << "\t\t\tİşlem başarılı.." << endl;
        Ana_Menu();
    }
    else
    {
        Ana_Menu();
    }
}

void ParaEkleme()
{
    cout << "\t\t\tHesaptaki Bakiye: " << bakiye << endl;
    cout << "\t\t\t1)Para Ekle " << endl;
    cout << "\t\t\t2)Menüye Dön " << endl;
    cout << "\t\t\t İşlem Seciniz: " ;
    cin >> islem;
    
    if (islem == 1)
    {
        cout << "\t\t\tEklenecek tutarı girin: " ;
        cin >> a;
        bakiye = bakiye+a;
        cout << "\t\t\tHesapta güncel tutar: " << bakiye << endl;
        cout << "\t\t\tİşlem başarılı.." << endl;
        Ana_Menu();
    }
    else
    {
        Ana_Menu();
    }
}

void KrediBilgileri()
{

    for(int i = 1; i < 5; i++) {
        cout << "\t\t\t" ;
      cout << i*2 << " Aylık Faiz: %" << faiz[i] << "\n";
    }
    for(int i = 1; i < 10; i++) {
      cout << "\t\t\tCekebilencek Tutarlar: " << miktar[i] << "\n";
    }
    cout << "\t\t\tKredi cekmek icin [1] baasın..." << endl;
    cout << "\t\t\tMenüye dönmek icin [2] basın..." << endl;
    cout << "\t\t\t Secim: " ;
    cin >> a;
    if (a == 2)
        Ana_Menu();
    else if (a == 1)
        Kredi();
}

void Kredi()
{
    for(int i = 1; i < 5; i++) {
        cout << "\t\t\t" ;
      cout << i*2 << " Aylık Faiz: %" << faiz[i] << "\n";
    }
    for(int i = 1; i < 10; i++) {
      cout << "\t\t\tCekebilencek Tutarlar: " << miktar[i] << "\n";
    }
    cout << "\t\t\tMenüye dönmek icin [1] basın.." << endl;
    cout << "\t\t\tCekmek istediğiniz tutarı giriniz: " ;
    cin >> a;
    if (a == 1)
    {
        Ana_Menu();
    }
    else if (a == 10000 || a == 20000)
    {
        cout << "\t\t\tÖdeyeceginiz tutar: " << (a*faiz[0])+a << endl;
        cout << "\t\t\tOnaylıyor musunuz ?[Y/N]";
        cin >> a;
        if (a == 1)
        {
            cout << "\t\t\tİşleminiz gercekleştiriliyor.." << endl;
            sleep(2);
            cout << "\t\t\tMenüye aktarılıyorsunuz.." << endl;
            Ana_Menu();
        }
        Kredi();
    }
    else if (a == 30000 || a == 40000)
    {
        cout << "\t\t\tÖdeyeceginiz tutar: " << (a*faiz[1])+a << endl;
        cout << "\t\t\tOnaylıyor musunuz ?[Y/N]";
        cin >> a;
        if (a == 1)
        {
            cout << "\t\t\tİşleminiz gercekleştiriliyor.." << endl;
            sleep(2);
            cout << "\t\t\tMenüye aktarılıyorsunuz.." << endl;
            Ana_Menu();
        }
        Kredi();
    }
    else if (a == 50000 || a == 60000)
    {
        cout << "\t\t\tÖdeyeceginiz tutar: " << (a*faiz[3])+a << endl;
        cout << "\t\t\tOnaylıyor musunuz ?[Y/N]";
        cin >> a;
        if (a == 1)
        {
            cout << "\t\t\tİşleminiz gercekleştiriliyor.." << endl;
            sleep(2);
            cout << "\t\t\tMenüye aktarılıyorsunuz.." << endl;
            Ana_Menu();
        }
        Kredi();
    }
    else if (a == 70000 || a == 70000)
    {
        cout << "\t\t\tÖdeyeceginiz tutar: " << (a*faiz[4])+a << endl;
        cout << "\t\t\tOnaylıyor musunuz ?[Y/N]";
        cin >> a;
        if (a == 1)
        {
            cout << "\t\t\tİşleminiz gercekleştiriliyor.." << endl;
            sleep(2);
            cout << "\t\t\tMenüye aktarılıyorsunuz.." << endl;
            Ana_Menu();
        }
        Kredi();
    }
    else if (a == 90000 || a == 100000)
    {
        cout << "\t\t\tÖdeyeceginiz tutar: " << (a*faiz[5])+a << endl;
        cout << "\t\t\tOnaylıyor musunuz ?[Y/N]";
        cin >> a;
        if (a == 1)
        {
            cout << "\t\t\tİşleminiz gercekleştiriliyor.." << endl;
            sleep(2);
            cout << "\t\t\tMenüye aktarılıyorsunuz.." << endl;
            Ana_Menu();
        }
        Kredi();
    }
    else
    {
        cout << "\t\t\tHatalı secim tekrar deneyiniz.." ;
        Ana_Menu();
    }
}
