#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int bgn,pil;
    char lagi;


system("color 30");
    awalx:
    printf("\t\tKALKULATOR BANGUN DATAR dan BANGUN RUANG (BETA v2 - Fian)\n\n");
    awal:

        printf("1. Bangun Datar\n2. Bangun ruang\n\nMAAF! Untuk versi ini hanya mendukung bilangan bulat (Bukan bilangan berkoma)\n\nMasukkan Pilihan Anda 1/2\t");scanf("%i",&bgn);

        if(bgn==1){
                int pilih;
            system("cls");
    printf("Anda memilih BANGUN DATAR\n");
    printf("\n\n1. SEGITIGA SAMA SISI");
    printf("\n2. PERSEGI");
    printf("\n3. PERSEGI PANJANG");
    printf("\n4. LINGKARAN\n5. JAJAR GENJANG\n6. LAYANG LAYANG");
    printf("\n\nMasukkan nomornya\t");scanf("%i",&pilih);

    if(pilih==1)
    {
        int pilih;
        system("cls");
        printf("\nAnda memilih SEGITIGA SAMA SISI");
        printf("\n\n1. Luas segitiga?");
        printf("\n2. Keliling segitiga?");
        printf("\nMasukkan nomornya\t");scanf("%i",&pilih);

        if(pilih==1)
        {

            float luas,a,t;
            system("cls");
            printf("\nAnda memilih LUAS SEGITIGA");
            printf("\n\nLuas segitiga\t= 1/2 x alas x tinggi");
            printf("\n\nMasukkan alas\t= ");scanf("%d",&a);
            printf("Masukkan tinggi\t= ");scanf("%d",&t);

            luas=a*t*1/2;

            printf("\nHasilnya\t= %5.0f",luas);
        }
        else
        {
            int s1,s2,s3;
            float kel;
            system("cls");
            printf("\nAnda memilih KELILING SEGITIGA");
            printf("\nRumusnya\t= sisi 1 + sisi 2 + sisi 3");
            printf("\n\nMasukkan sisi 1\t= ");scanf("%d",&s1);
            printf("Masukkan sisi 2\t= ");scanf("%d",&s2);
            printf("Masukkan sisi 3\t= ");scanf("%d",&s3);

            kel=s1+s2+s3;

            printf("\nHasilnya\t= %5.0f",kel);
        }

    }

    else if(pilih==2)
    {
        int pilih;
        system("cls");
        printf("\nAnda memilih PERSEGI");
        printf("\n\n1. Luas persegi?");
        printf("\n2. Keliling persegi?");
        printf("\nMasukkan nomornya\t");scanf("%i",&pilih);

        if(pilih==1)
        {
            int s;
            float luas;
            system("cls");
            printf("\nAnda memilih LUAS PERSEGI");
            printf("\n\nLuas persegi\t\t= sisi x sisi");
            printf("\nMasukkan sisinya\t= ");scanf("%d",&s);

            luas=s*s;

            printf("\nHasilnya\t\t= %5.0f",luas);
        }
        else
        {
            int sisi;
            float kel;
            system("cls");
            printf("\nAnda memilih KELILING PERSEGI");
            printf("\nRumusnya\t\t= 4 x sisi");
            printf("\n\nMasukkan sisinya\t= ");scanf("%d",&sisi);
            kel=4*sisi;

            printf("\nHasilnya\t\t= %5.0f",kel);
        }
    }

    else if(pilih==3)
    {
        int pilih;
        system("cls");
        printf("\nAnda memilih PERSEGI PANJANG");
        printf("\n\n1. Luas persegi panjang?");
        printf("\n2. Keliling persegi panjang?");
        printf("\nMasukkan nomornya\t");scanf("%i",&pilih);

        if(pilih==1)
        {
            int p,l;
            float luas;
            system("cls");
            printf("\nAnda memilih LUAS PERSEGI PANJANG");
            printf("\n\nLuas persegi panjang\t= panjang x lebar");
            printf("\n\nMasukkan panjangnya\t= ");scanf("%d",&p);
            printf("Masukkan lebarnya\t= ");scanf("%d",&l);

            luas=p*l;

            printf("\nHasilnya\t\t= %5.0f",luas);
        }
        else
        {
            int pjg,lbr;
            float kel;
            system("cls");
            printf("Anda memilih KELILING PERSEGI PANJANG");
            printf("\n\nRumusnya\t\t= (panjang + lebar) x 2");
            printf("\n\nMasukkan panjangnya\t= ");scanf("%d",&pjg);
            printf("Masukkan lebarnya\t= ");scanf("%d",&lbr);

            kel=2*(pjg+lbr);

            printf("\nHasilnya\t\t= %5.0f",kel);
        }
    }

    else if(pilih==4)
    {
        int pilih;
        system("cls");
        printf("\nAnda memilih LINGKARAN");
        printf("\n\n1. Luas lingkaran?");
        printf("\n2. Keliling lingkaran?");
        printf("\nMasukkan nomornya\t");scanf("%i",&pilih);

        if(pilih==1)
        {
            int r;
            float luas;
            system("cls");
            printf("\nAnda memilih LUAS LINGKARAN");
            printf("\n\nLuas lingkaran\t= phi x r x r");
            printf("\n\nMasukkan jari-jarinya\t= ");scanf("%d",&r);

            luas=3.14*r*r;

            printf("\nHasilnya\t\t= %f",luas);
        }
        else
        {
            int pilihan;
            float keljar,keldia;
            system("cls");
            printf("\nAnda memilih KELILING LINGKARAN");
            printf("\nHitung menggunakan jari-jari atau diameter?");
            printf("\n1. Jari-jari");
            printf("\n2. Diameter");
            printf("\nMasukkan nomornya\t\t");scanf("%i",&pilihan);

            if(pilihan==1)
            {
                int r;
                printf("\nMENGGUNAKAN JARI JARI");
                printf("\n\nMasukkan jari-jarinya\t= ");scanf("%d",&r);
                keljar=2*r*3.14;
                printf("\nHasilnya\t\t= %f",keljar);
            }

            else
            {
                int d;
                printf("\nMENGGUNAKAN DIAMETER");
                printf("\n\nMasukkan diameternya\t= ");scanf("%d",&d);
                keldia=d*3.14;
                printf("\nHasilnya\t\t= %f",keldia);
            }

        }
    }

    /// RUMUS SELANJUTNYA PASANG DIBAWAH INI else if///

    else if(pilih==5)
    {
        int pilih;
        system("cls");
        printf("\nAnda memilih JAJAR GENJANG");
        printf("\n\n1. Luas jajar genjang?");
        printf("\n2. Keliling jajar genjang?");
        printf("\nMasukkan nomornya\t");scanf("%i",&pilih);

    if(pilih==1){
        int al,tn;
            float luas;
            system("cls");
            printf("\nAnda memilih LUAS JAJAR GENJANG");
            printf("\n\nLuas jajar genjang\t= alas x tinggi");
            printf("\n\nMasukkan alas\t= ");scanf("%d",&al);
            printf("Masukkan tinggi\t= ");scanf("%d",&tn);

            luas=al*tn;

            printf("\nHasilnya\t= %5.0f",luas);
    }
    else if(pilih==2)
    {
        float kel;
        int al,tn;
            system("cls");
            printf("\nAnda memilih KELILING JAJAR GENJANG");
            printf("\n\Keliling jajar genjang\t= 2 x alas x tinggi");
            printf("\n\nMasukkan alas\t= ");scanf("%d",&al);
            printf("Masukkan tinggi\t= ");scanf("%d",&tn);

            kel=(al+tn)*2;

            printf("\nHasilnya\t= %5.0f",kel);
    }
    else
        {
            printf("Kode SALAH!");
        }
    }

    else if(pilih==6)
    {
        int pilih;
        system("cls");
        printf("\nAnda memilih LAYANG LAYANG");
        printf("\n\n1. Luas layang layang?");
        printf("\n2. Keliling layang layang?");
        printf("\nMasukkan nomornya\t");scanf("%i",&pilih);

        if(pilih==1)
    {
        int d,dd;
            float luas;
            system("cls");
            printf("\nAnda memilih LUAS LAYANG LAYANG");
            printf("\n\nLuas layang layang\t\t= 1/2 x d1 x d2");
            printf("\n\nMasukkan Diameter 1 (d1)\t= ");scanf("%d",&d);
            printf("Masukkan Diameter 2 (d2)\t= ");scanf("%d",&dd);

            luas=d*dd*1/2;

            printf("\nHasilnya\t= %5.0f",luas);
    }
    else if(pilih==2)
    {
        float kel;
        int al,tn;
            system("cls");
            printf("\nAnda memilih KELILING LAYANG LAYANG");
            printf("\n\Keliling layang layang\t= 2 x AB + AD");
            printf("\n\nMasukkan AB\t\t= ");scanf("%d",&al);
            printf("Masukkan AD\t\t= ");scanf("%d",&tn);

            kel=(al+tn)*2;

            printf("\nHasilnya\t= %5.0f",kel);
    }
    else
        {
            printf("Kode SALAH!");
        }


    }



    else
    {
        printf("Error 0001 (Wrong Code)");
    }
        }

        /// bagian BANGUN RUANG

        else if(bgn==2)
        {
            system("cls");
            int ruang;
            float klg,ls,vol;

            printf("\n\tAnda memilih BANGUN RUANG\n\n1. Kubus\n2. Balok\n");
            printf("3. Prisma Segitiga\n4. Limas alas persegi");
            printf("\n\nSilahkan pilih 1/2");scanf("%i",&ruang);
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tV2 Beta\n\n");

            if(ruang==1)
                {
                    system("cls");
                    int kub,si;
                printf("\nAnda memilih KUBUS");
                printf("\n1.Luas kubus\n2.Keliling kubus\n3.Volume kubus");
                printf("\n\nSilahkan pilih 1/2/3");scanf("%i",&kub);

                    if(kub==1){
                            system("cls");
                        printf("Anda memilih LUAS KUBUS\nRumusnya\t\t= 6 x sisi");
                        printf("\n\nMasukkan Sisinya\t= ");scanf("%d",&si);
                        ls=si*6;
                        printf("\nHasilnya\t\t= %2.0f",ls);
                    }

                    else if(kub==2) /// ini KELILING KUBUS
                    {
                        system("cls");
                        printf("\nAnda memilih KELILING KUBUS\n\nRumusnya\t\t= 12 x sisi");
                        printf("\n\nMasukkan Sisinya\t= ");scanf("%d",&si);
                        klg=si*12;
                        printf("\n\nHasilnya\t\t= %2.0f",klg);

                    }

                    else if(kub==3)
                    {
                        system("cls");
                        printf("\nAnda memilih VOLUME KUBUS\n\nRumusnya\t\t= s x s x s");
                        printf("\n\nMasukkan Sisinya\t= ");scanf("%d",&si);
                        klg=si*si*si;
                        printf("\n\nHasilnya\t\t= %2.0f",klg);
                    }

                    else
                    {
                        system("cls");
                        printf("\n\nError 0001 (Wrong Code)\n\n");
                    }
            }

            else if(ruang==2)
            {
                int blk;
                float s,p,t,l;

                            system("cls");
                            printf("\nAnda memilih BALOK");
                            printf("\n\n1. Luas balok\n2. Keliling balok\n3. Volume balok");
                            printf("\n\nMasukkan pilihan Anda 1/2/3");scanf("%i",&blk);

                            if(blk==1)
                                {
                                    float calonls;
                                    system("cls");
                                    printf("\nAnda memilih LUAS BALOK\n\nRumusnya\t\t= 2 x [(p x l) + (p x t) + (l x t)]");
                                    printf("\n\nMasukkan panjang\t= ");scanf("%f",&p);
                                    printf("\nMasukkan luas\t\t= ");scanf("%f",&l);
                                    printf("\nMasukkan sisi\t\t= ");scanf("%f",&s);
                                    printf("\nMasukkan tinggi\t\t= ");scanf("%f",&t);

                                    calonls=(p*l)+(p*t)+(l*t);
                                    ls=calonls*2;

                                    printf("\n\nHasilnya \t\t= %2.0f",ls);
                                }

                                /// selanjutnya dibawah ini KELILING BALOK

                            else if(blk==2)
                            {
                                float klok;
                                system("cls");
                                printf("\n\tAnda memilih KELILING BALOK");
                                printf("\n\nRumusnya\t\t= 4 x (p + l + t)"); /// Dilanjutkan
                                 printf("\n\nMasukkan panjang\t= ");scanf("%f",&p);
                                    printf("\nMasukkan luas\t\t= ");scanf("%f",&l);
                                    printf("\nMasukkan tinggi\t\t= ");scanf("%f",&t);
                                    klok=(p+l+t)*4;
                                    printf("\n\nHasilnya\t\t= %2.0f",klok);
                                    }

                                    else if(blk==3){

                                        float vlok;
                                    system("cls");
                                    printf("\nAnda memilih VOLUME BALOK\n\nRumusnya\t\t= p x l x t");
                                    printf("\n\nMasukkan panjang\t= ");scanf("%f",&p);
                                    printf("\nMasukkan luas\t\t= ");scanf("%f",&l);
                                    printf("\nMasukkan tinggi\t\t= ");scanf("%f",&t);

                                    vlok=p*l*t;

                                    printf("\n\nHasilnya \t\t= %2.0f",vlok);
                                    }
            }

                        else if(ruang==3)
                        {
                            system("cls");
                    int prit,si;
                printf("\nAnda memilih PRISMA SEGITIGA"); /// PRISMA SEGITIGA setelah LIMAS ALAS PERSEGI
                printf("\n1.Luasnya\n2.Kelilingnya\n3.Volumenya");
                printf("\n\nSilahkan pilih 1/2/3");scanf("%i",&prit);

                    if(prit==1){
                            int al,tn,ka,tp,lsx,su;
                            float lsa;
                            system("cls");
                        printf("\nAnda memilih LUAS PRISMA SEGITIGA\n\nRumusnya\t\t= [2 x (alas x tinggi) : 2)] + (keliling alas x tinggi prisma)\n");
                        printf("\n\nMasukkan alasnya\t= ");scanf("%i",&al);
                    printf("\n\nMasukkan tingginya\t= ");scanf("%i",&tn);
                    printf("\n\nMasukkan keliling alas\t= ");scanf("%i",&ka);
                    printf("\n\nMasukkan tinggi prisma\t= ");scanf("%i",&tp);
                        ls=2*(al*tn);
                        su=ls/2;
                        lsx=ka*tp;
                        lsa=su+lsx;
                        printf("\nHasilnya\t\t= %2.0f",lsa);}

                        else if(prit==2){
                            int ka,ks,kax,ksx;
                            system("cls");
                        printf("\nAnda memilih KELILING PRISMA SEGITIGA\n\nRumusnya\t\t=  (2 x keliling alas) + (3 x keliling sisi)\n");
                    printf("\n\nMasukkan keliling alas\t= ");scanf("%i",&ka);
                    printf("\n\nMasukkan keliling sisi\t= ");scanf("%i",&ks);
                        kax=2*ka;
                        ksx=3*ks;
                        klg=kax+ksx;
                        printf("\nHasilnya\t\t= %2.0f",klg);}

                            else if(prit==3){
                                int a,t,tp,asttt,s;
                                float volxxx;
                            system("cls");
                        printf("\nAnda memilih VOLUME PRISMA SEGITIGA\n\nRumusnya\t\t=  [(alas x tinggi) : 2] x tinggi prisma\n");
                        printf("\n\nMasukkan alasnya\t= ");scanf("%i",&a);
                        printf("\n\nMasukkan tingginya\t= ");scanf("%i",&s);
                        printf("\n\nMasukkan tinggi prismanya\t= ");scanf("%i",&tp);
                        asttt=(a*t)/2;
                        volxxx=asttt*tp;
                        printf("\nHasilnya\t\t= %2.0f",volxxx);}

                            }

            else if(ruang==4){
                    int a,t,s;
                    system("cls");
                printf("\n\n\t Anda memilih LIMAS ALAS PERSEGI\n\n1. Luas\n2. Keliling\n3. Volume");
            printf("\n\nSilahkan Pilih 1/2/3");scanf("%i",&pil);

                    if(pil==1){
                            int ls2,ls3;
                            system("cls");
                        printf("\n\n\tAnda memilih LUAS LIMAS ALAS PERSEGI\n\nRumusnya\t\t= 4 x (1/2 x a x t) + (s x s)");
                        printf("\n\nMasukkan alas\t\t= ");scanf("%i",&a);
                        printf("\n\nMasukkan tinggi\t\t= ");scanf("%i",&t);
                        printf("\n\nMasukkan sisi\t\t= ");scanf("%i",&s);

                        ls2=a*t*1/2;
                        ls3=4*ls2;
                        ls=(s*s)+ls3;

                        printf("Hasilnya\t\t= %2.0f",ls);

                    }
                    else if(pil==2){ /// keliling limas lanjutin
                        system("cls");
                        printf("\n\n\tAnda memilih KELILING LIMAS ALAS PERSEGI\n\nRumusnya\t\t= 4 x (1/2 x a x t) + (s x s)");
                        printf("\n\nMasukkan alas\t\t= ");scanf("%i",&a);
                        printf("\n\nMasukkan tinggi\t\t= ");scanf("%i",&t);
                        printf("\n\nMasukkan sisi\t\t= ");scanf("%i",&s);
                    }
            }






                    else
                            {
                                printf("\n\n\nWrong Code 0001");
                            }

        }



        else
                    {
                        system("cls");
                        printf("\n\nError 0001 (Wrong Code)\n\n");
                    }




    printf("\n\nCari lagi? Y/N\t");scanf("%s",&lagi);
    system("cls");
    if(lagi=='y'||lagi=='Y')
    {
        goto awal;
    }

else
{
    printf("Program Terminated");
    printf("\n\nKLIK APA SAJA UNTUK KELUAR\n\n\n\n\n\n\\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("C L E A R I N G");
    printf("\n\tC L E A R I N G");
    printf("\n\t\tC L E A R I N G");
        printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
        printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\n\n\n\n");

    printf("\nProgram Terminated");

    printf("\tKlik apa saja untuk keluar\n\n\nKALKULATOR BANGUN DATAR DAN BANGUN RUANG\n");
    printf("\nVersion 2 BETA - Aditya Fian Sugiarto\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tV2 Beta\n\n");

    _Exit(0);
}

getch();
}
