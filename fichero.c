#include <stdio.h>
#include <stdlib.h>

int main()
    {
    FILE *fichero;
    char letra;

    fichero = fopen("origen.txt","r");
    if (fichero==NULL)
       {
       printf( "No se puede abrir el fichero.\n" );
       exit( 1 );
       }
    printf( "Contenido del fichero:\n" );
    letra=getc(fichero);
    while (feof(fichero)==0)
          {
          printf( "%c",letra );
          letra=getc(fichero);
          }
    if (fclose(fichero)!=0)
       printf( "Problemas al cerrar el fichero\n" );
    }