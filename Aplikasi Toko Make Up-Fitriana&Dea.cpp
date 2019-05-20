#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void garis();
void strip();
void all();
void lip();
void colour();
void bedak();
void shade();
void blushon();
void blush();
void tdk_tersedia();

main()
{
    char usname[30];
    char pass[10];
    char awal;
    int jenis, merk, pil, harga, total, jml, warna, kembali, bayar;
    back:
    garis();
    cout<<"                 Selamat Datang di Toko FD Kosmetik"<<endl;
    garis();
    cout<<"\n"<<endl;

    login:
    cout<<"         ";strip();
    cout<<"                 Silahkan Login Terlebih Dahulu"<<endl;
    cout<<"         ";strip();
    cout<<"\n         Username   : "; cin.getline(usname, sizeof(usname));
    cout<<"         Password   : "; cin.getline(pass, sizeof(pass));

    if (strcmp(usname,"Kasir")==0 && strcmp(pass,"*****")==0)
    {
    cout<<"\n"<<endl;
    strip();
    cout<<"                    Jenis Make up                 "<<endl;
    strip();
    cout<<"|1.|Bedak                                           |"<<endl;
    cout<<"|2.|Lipstick                                        |"<<endl;
    cout<<"|3.|Concealer                                       |"<<endl;
    cout<<"|4.|Foundation                                      |"<<endl;
    cout<<"|5.|Blush On                                        |"<<endl;
    strip();
    cout<<"Pilih Jenis Make Up: ";
    cin>>jenis;
    }

    else
	{
		cout<<"\n                 Maaf Username Yang Anda Masukan Salah, Silakan Login Kembali\n"<<endl;
		goto login;
		return 0;
	}
	cout<<endl;

	switch(jenis)
            {
            case 1:
                all();
        cin>>merk;
        switch(merk)
        {
            case 1:
        bedak();
        cin>>pil;
        switch(pil)
    {case 1:
        shade();
        cin>>warna;
           if(warna==1||warna==2||warna==3)
       {

              cout<<endl;
              strip();
            cout<<"Nama Produk      : Compact Powder Wardah"<<endl;
            cout<<"Jumlah Barang    : ";
            cin>>jml;
              harga=67000;
                total=jml*67000;
       }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;



   case 2:
                shade();
        cin>>warna;
                if(warna==1||warna==2||warna==3)
            {
                cout<<endl;
                strip();

                cout<<"Nama Produk      : Loose Powder Wardah"<<endl;
                cout<<"Jumlah barang    : ";
        cin>>jml;

               harga=52000;
                total=jml*52000;
            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
   default:
    {tdk_tersedia();
            harga=0;
            total=0;}
    } break;
   case 2:
    bedak();
        cin>>pil;
        switch(pil)
    {case 1:
        shade();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
                  cout<<endl;
                strip();

        cout<<"Nama Produk      : Compact Powder Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;


              harga=152000;
                total=jml*152000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                shade();
        cin>>warna;
                if(pil==1||pil==2||pil==3)
            {
        cout<<endl;
                strip();

        cout<<"Nama Produk      : Loose Powder Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

               harga=157000;
               total=jml*157000;
            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
    } break;
   case 3:
       bedak();
        cin>>pil;
        switch(pil)
    {case 1:
        shade();
        cin>>warna;
            if(warna==1||warna==2||warna==3)
              {
    cout<<endl;
                strip();

        cout<<"Nama Produk      : Compact Powder Pixy"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;


              harga=18000;
                total=jml*18000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                shade();
        cin>>warna;
            if(pil==1||pil==2||pil==3)
            {
            strip();

        cout<<"Nama Produk      : Loose Powder Pixy"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

               harga=28000;
                total=jml*28000;
            }

            else
              {tdk_tersedia();
            harga=0;
            total=0;}
                break;
    } break;
    case 4:
         bedak();
        cin>>pil;
        switch(pil)
    {case 1:
        shade();
        cin>>warna;
            if(warna==1||warna==2||warna==3)
              {
strip();

        cout<<"Nama Produk      : Compact Powder Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=115000;
                total=jml*115000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;



   case 2:
                shade();
        cin>>warna;
                if(pil==1||pil==2||pil==3)
            {
            strip();

        cout<<"Nama Produk      : Loose Powder Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

               harga=95000;
                total=jml*95000;
            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
    } break;
    case 5:
         bedak();
        cin>>pil;
        switch(pil)
    {case 1:
        shade();
        cin>>warna;
            if(warna==1||warna==2||warna==3)
              {
strip();

        cout<<"Nama Produk      : Compact Powder Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=45000;
                total=jml*45000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                shade();
                        cin>>warna;
                if(pil==1||pil==2||pil==3)
            {
strip();

        cout<<"Nama Produk      : Loose Powder Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

               harga=55000;
                total=jml*55000;
            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
    } break;
         case 6:
         bedak();
        cin>>pil;
        switch(pil)
    {case 1:
        shade();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
strip();

        cout<<"Nama Produk      : Compact Powder Emina"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;


              harga=32000;
                total=jml*32000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                shade();
        cin>>warna;
        if(pil==1||pil==2||pil==3)
            {
strip();

        cout<<"Nama Produk      : Loose Powder Emina"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

            harga=40000;
                total=jml*40000;
            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
    }
    break;
   default:
{tdk_tersedia();
            harga=0;
            total=0;}

        }
        break;
                    case 2:
                all();
        cin>>merk;
        switch(merk)
        {
            case 1:
        lip();
        cin>>pil;
        switch(pil)
    {case 1:
        colour();
        cin>>warna;
            if(warna==1||warna==2||warna==3||warna==4)
              {
strip();

        cout<<"Nama Produk      : Lipstick Wardah"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;


              harga=35000;
                total=jml*35000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                colour();
        cin>>warna;
            if(warna==1||warna==2||warna==3||warna==4)
            {

        strip();

        cout<<"Nama Produk      : Lipcream Wardah"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
               harga=55000;
                total=jml*55000;
            }

            else
{tdk_tersedia();
            harga=0;
            total=0;}
                            break;
   default:
{tdk_tersedia();
            harga=0;
            total=0;}
    } break;
   case 2:
lip();
        cin>>pil;
        switch(pil)
    {case 1:
        colour();
        cin>>warna;
            if(warna==1||warna==2||warna==3||warna==4)
              {
        strip();

        cout<<"Nama Produk      : Lipstick Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;


             harga=50000;
                total=jml*50000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                colour();
                        cin>>warna;
            if(warna==1||warna==2||warna==3||warna==4)
              {
        strip();

        cout<<"Nama Produk      : Lipcream Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
               harga=110000;
                total=jml*110000;

            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                   default:
    {tdk_tersedia();
            harga=0;
            total=0;}
    } break;


   case 3:
       lip();
        cin>>pil;
        switch(pil)
    {case 1:
        colour();
        cin>>warna;
            if(warna==1||warna==2||warna==3||warna==4)
            {
        strip();

        cout<<"Nama Produk      : Lipstick Pixy"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=36000;
                total=jml*36000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
       colour();
        cin>>warna;
        if(warna==1||warna==2||warna==3||warna==4)
              {
                          strip();

        cout<<"Nama Produk      : Lipcream Pixy"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
        harga=40000;
        total=jml*40000;
            }


            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
   default:
{tdk_tersedia();
            harga=0;
            total=0;}    }
             break;
    case 4:
         lip();
        cin>>pil;
        switch(pil)
    {case 1:
                colour();
        cin>>warna;
        if(warna==1||warna==2||warna==3||warna==4)
              {
cout<<endl;
                          strip();
        cout<<"Nama Produk      : Lipstick Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=72000;
                total=jml*72000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                colour();
                        cin>>warna;
        if(warna==1||warna==2||warna==3||warna==4)
              {

cout<<endl;
                          strip();

        cout<<"Nama Produk      : Lipcream Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
               harga=85000;
                total=jml*85000;

            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
   default:
{tdk_tersedia();
            harga=0;
            total=0;}
    } break;
         case 5:
         lip();
        cin>>pil;
        switch(pil)
    {case 1:
                colour();
        cin>>warna;
        if(warna==1||warna==2||warna==3||warna==4)
              {

cout<<endl;
                          strip();

        cout<<"Nama Produk      : Lipstick Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;



              harga= 15000;
                total=jml*15000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
               colour();
        cin>>warna;
         if(warna==1||warna==2||warna==3||warna==4)
            {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Lipcream Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
               harga=25000;
                total=jml*25000;
            }

            else
           {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                   default:
{tdk_tersedia();
            harga=0;
            total=0;}
    } break;
    case 6:
         lip();
        cin>>pil;
        switch(pil)
    {case 1:
                colour();
        cin>>warna;
        if(warna==1||warna==2||warna==3||warna==4)
              {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Lipstick Emina"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=44000;
                total=jml*44000;

              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
               colour();
        cin>>warna;
        if(warna==1||warna==2||warna==3||warna==4)
              {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Lipcream Emina"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
               harga=35000;
                total=jml*35000;
            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                   default:
     {tdk_tersedia();
            harga=0;
            total=0;}
    } break;
   default:
   {tdk_tersedia();
            harga=0;
            total=0;}


        } break;

        case 3:
                all();
        cin>>merk;
        switch(merk)
        {
case 1:
        {tdk_tersedia();
            harga=0;
            total=0;}
        break;
   case 2:
                shade();
        cin>>warna;
                    if(warna==1||warna==2||warna==3)

        {cout<<endl;
                          strip();

        cout<<"Nama Produk      : Concealer Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
              harga=80000;
                total=jml*80000;
}
                                else
{tdk_tersedia();
            harga=0;
            total=0;}
                            break;


  case 3:
                shade();
        cin>>warna;
if(warna==1||warna==2||warna==3)
{
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Concealer Pixy"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
              harga=30000;
                total=jml*30000;
         }
                                       else
                    {tdk_tersedia();
            harga=0;
            total=0;}
                break;

  case 4:
                shade();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
        {     cout<<endl;
                          strip();

        cout<<"Nama Produk      : Concealer Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
              harga=105000;
              total=jml*harga;
}
          else
                    {tdk_tersedia();
            harga=0;
            total=0;}
                break;
        case 5:
                shade();
        cin>>warna;
                if(warna==1||warna==2||warna==3)
                {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Concealer Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
              harga=30000;
                total=jml*30000;
}
                else
            {tdk_tersedia();
            harga=0;
            total=0;}
                break;
            case 6:
          {tdk_tersedia();
            harga=0;
            total=0;}
                break;
            default:
              {tdk_tersedia();
            harga=0;
            total=0;}
                }
            break;
                    case 4:
                all();
        cin>>merk;
        switch(merk)
        {
case 1:
                       shade();
        cin>>warna;
                if(warna==1||warna==2||warna==3)
        {cout<<endl;
                          strip();

        cout<<"Nama Produk      : Foundation Wardah"<<endl;
        cout<<"Jumlah barang    : ";
              harga=60000;
                total=jml*60000;}
                else
                   {tdk_tersedia();
            harga=0;
            total=0;}
                break;
        break;
   case 2:
                shade();
        cin>>warna;
                if(warna==1||warna==2||warna==3)
        {cout<<endl;
                          strip();

        cout<<"Nama Produk      : Foundation Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
        harga=130000;
                total=jml*130000;
 }
                else
                   {tdk_tersedia();
            harga=0;
            total=0;}
                break;

  case 3:
{tdk_tersedia();
            harga=0;
            total=0;}
                            break;

  case 4:
                shade();
        cin>>warna;
                if(warna==1||warna==2||warna==3)
        {cout<<endl;
                          strip();

        cout<<"Nama Produk      : Foundation Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
              harga=110000;
                total=jml*110000;
 }
                else
                  {tdk_tersedia();
            harga=0;
            total=0;}
                break;
        case 5:
                shade();
        cin>>warna;
                if(warna==1||warna==2||warna==3)
        {cout<<endl;
                          strip();

        cout<<"Nama Produk      : Foundation Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
              harga=35000;
                total=jml*35000;
}
                 else
{tdk_tersedia();
            harga=0;
            total=0;}
                            break;
            case 6:
            tdk_tersedia();
                break;
   default:
  {tdk_tersedia();
            harga=0;
            total=0;}  }
            break;

                        case 5:
                all();
        cin>>merk;
        switch(merk)
        {
            case 1:
        blushon();
        cin>>pil;
        switch(pil)
    {case 1:
        blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
 cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Powder Wardah"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;



              harga=35000;
                total=jml*35000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:

               {tdk_tersedia();
            harga=0;
            total=0;}
                break;
   default:
    tdk_tersedia();
    } break;
   case 2:
blushon();
        cin>>pil;
        switch(pil)
    {case 1:
        blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Powder Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
harga=65000;
                total=jml*65000;

              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                blush();
                        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
 cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Cream Maybelline"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
         harga=120000;
                total=jml*120000;

            }

            else
              {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                default:
   {tdk_tersedia();
            harga=0;
            total=0;}
    } break;


   case 3:
      blushon();
        cin>>pil;
        switch(pil)
    {case 1:
        blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
 cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Powder Pixy"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
harga=40000;
                total=jml*40000;

              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                default:
    {tdk_tersedia();
            harga=0;
            total=0;}
    } break;
    case 4:
         blushon();
        cin>>pil;
        switch(pil)
    {case 1:
                blush();
                        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
 cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Powder Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=70000;
                total=jml*70000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
              blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
   cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Cream Make Over"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;
               harga=95000;
                total=jml*95000;
            }

            else
               {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                default:
    {tdk_tersedia();
            harga=0;
            total=0;}
    } break;
         case 5:
         blushon();
        cin>>pil;
        switch(pil)
    {case 1:
                blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Powder Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=15000;
                total=jml*15000;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
               blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Cream Focallure"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=30000;
                total=jml*30000;            }

            else
                {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                default:
 {tdk_tersedia();
            harga=0;
            total=0;}
    } break;
    case 6:
         blushon();
        cin>>pil;
        switch(pil)
    {case 1:
                blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Powder Emina"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=35000;
                total=jml*35000;
                cout<<"Total Harga  : Rp."<<total<<endl;
              }
            else {tdk_tersedia();
            harga=0;
            total=0;}
            break;


   case 2:
              blush();
        cin>>warna;
        if(warna==1||warna==2||warna==3)
              {
cout<<endl;
                          strip();

        cout<<"Nama Produk      : Blush On Cream Emina"<<endl;
        cout<<"Jumlah barang    : ";
        cin>>jml;

              harga=30000;
                total=jml*30000;
                cout<<"Total Harga  : Rp."<<total<<endl;
            }

            else
               {tdk_tersedia();
            harga=0;
            total=0;}
                break;
                default:
  {tdk_tersedia();
            harga=0;
            total=0;}
    }
    break;
    default:
{tdk_tersedia();
            harga=0;
            total=0;}

        }break;
         default:
{tdk_tersedia();
            harga=0;
            total=0;}
            }

            cout<<"Harga Satuan     : Rp. "<<harga<<endl;
            cout<<"Total Harga      : Rp. "<<total<<endl;
                        strip();
            cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=*Terimakasih*=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            cout<<endl<<endl;
  cout<<" Kembali Ke Menu Awal?[Y/T] : ";cin>>awal;

  cout<<endl;
  if(awal=='Y' || awal=='y')
  {goto back;}
  if(awal=='T' || awal=='t')
  {goto selesai;}
  selesai:
  cout<<endl;
             getch();
    }


void garis()
{
    cout<<"========================================================================"<<endl;
}
void strip()
{
    cout<<"-----------------------------------------------------"<<endl;
}

void all()
{
    cout<<endl;
    strip();
    cout<<"                     Merk Make Up                "   <<endl;
    strip();
    cout<<"|1.|Wardah                                          |"<<endl;
    cout<<"|2.|Maybelline                                      |"<<endl;
    cout<<"|3.|Pixy                                            |"<<endl;
    cout<<"|4.|Make Over                                       |"<<endl;
    cout<<"|5.|Focallure                                       |"<<endl;
    cout<<"|6.|Emina                                           |"<<endl;
    strip();
        cout<<"Pilih Merk Make Up(1-6): ";
}
void bedak()
{     cout<<endl;
    strip();
    cout<<"                     Jenis Bedak                "   <<endl;
    strip();
    cout<<"|1.|Compact Powder                                  |"<<endl;
    cout<<"|2.|Loose Powder                                    |"<<endl;
        strip();
    cout<<"Pilih Jenis Bedak(1-2): ";

}
void tdk_tersedia()
{
                    cout<<endl;
        cout<<"----------------------Pilihan Tidak Tersedia---------------------------"<<endl;;

}
void shade()
{
    cout<<endl;
    strip();
    cout<<"                     Pilihan Shade               "   <<endl;
    strip();
    cout<<"|1.|Light                                           |"<<endl;
    cout<<"|2.|Natural                                         |"<<endl;
    cout<<"|3.|Beige                                           |"<<endl;
               strip();
    cout<<"Pilih Shade(1-3): ";


}

void lip()
{
    cout<<endl;
    strip();
    cout<<"                     Pilihan Lipstick               "   <<endl;
    strip();
    cout<<"|1.|Lipstick                                        |"<<endl;
    cout<<"|2.|Lipcream                                        |"<<endl;
        strip();
    cout<<"Pilihan Jenis Lipstick(1-2): ";

}

void colour()
{
    cout<<endl;
    strip();
    cout<<"                     Pilihan Warna Lipstick               "   <<endl;
    strip();
    cout<<"|1.|Red                                             |"<<endl;
    cout<<"|2.|Pink                                            |"<<endl;
    cout<<"|3.|Orange                                          |"<<endl;
    cout<<"|4.|Nude                                            |"<<endl;
    strip();
    cout<<"Pilih Warna Lipstick(1-4): ";

}

void blushon()
{
    cout<<endl;
    strip();
    cout<<"                     Pilihan Jenis Blush On               "   <<endl;
    strip();
    cout<<"|1.|Powder                                         |"<<endl;
    cout<<"|2.|Cream                                          |"<<endl;
    strip();
    cout<<"Pilihan Jenis Blush On(1-2): ";

}
void blush()
{
    cout<<endl;
    strip();
    cout<<"                     Pilihan Warna Blush On               "   <<endl;
    strip();
    cout<<"|1.|Red                                            |"<<endl;
    cout<<"|2.|Pink                                           |"<<endl;
    cout<<"|3.|Orange                                         |"<<endl;
     strip();
    cout<<"Pilih Warna Blush On(1-3): ";

}
