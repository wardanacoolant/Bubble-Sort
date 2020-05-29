#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jml,i,pil,j,temp;
    awal:
    system("cls");
    printf("PROGRAM BUBBLE SORT\n\nMasukan jumlah data (10-50): ");
    scanf("%d", &jml);
    if(jml<10||jml>50)
    {
        printf("Maaf, input data tidak sesuai dengan ketentuan.\nSilakan masukkan ulang data Anda!");
        getch();
        goto awal;
    }
    int bil[jml];
    printf("Input data bilangan\n");
    for(i=0;i<jml;i++)
    {
        printf("Data ke-%d\t: ",i+1);
        scanf("%d", &bil[i]);
    }

    printf("\nHasil Bubble-sorting Menaik: \n");
    for(i=1;i<=jml;i++)
    {
        for(j=i;j<jml;j++)
        {
            if(bil[j]<bil[j-1])
            {
                temp=bil[j];
                bil[j]=bil[j-1];
                bil[j-1]=temp;
            }
        }
    }
    for(i=0;i<jml;i++)
    {
        printf("Data ke-%d\t: %d\n", i+1, bil[i]);
    }
    return 0;
}
