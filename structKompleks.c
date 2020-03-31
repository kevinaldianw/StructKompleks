/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct complex_t 
{
    int real;
    int imajiner;
};

struct complex_t complex1, complex2, jumlah, kurang;

int main()
{
    printf("Masukkan bilangan kompleks:");
    scanf("%d %d %d %d",&complex1.real,&complex1.imajiner,&complex2.real,&complex2.imajiner);
    
    jumlah.real = complex1.real + complex2.real;
    jumlah.imajiner = complex1.imajiner + complex2.imajiner;
    
    kurang.real = complex1.real - complex2.real;
    kurang.imajiner = complex1.real - complex2.real;
    
    printf("jumlah = %d + %di kurang = %d + %di",jumlah.real,jumlah.imajiner,kurang.real,kurang.imajiner);

    return 0;
}
