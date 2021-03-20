#include <iostream>
using namespace std;
int suma( int *a, int *b , int *c) //funcion y declaracion de punteros, con su contenido (valor)
{
int r; //declaro r como resultado
r = *a + *b + *c; //la operacion *CON LOS CONTENIDOS(*valores)
*a = 0; //SIEMPRE se inicializan punteros valor null cero
*b = 0;
*c = 0;
return r;
}

int main()
{
int var1, var2, var3; //inicializo las variables o var1 = 1; var2 = 3;


printf( "\n" ); printf("Mete valor de a: "); //& saca valor de variable, indica su direccion en memoria
scanf("%d", &var1); //& SIEMPRE en la llamada, nunca en la funcion
printf("Mete valor de b: ");
scanf("%d", &var2);
printf("Mete valor de c: ");
scanf("%d", &var3);

printf( "***************\n");printf( "a: %i\n", var1 );
printf( "b: %i\n", var2 ); printf( "c: %i\n", var3 );
printf( "Resultado= %i\n", suma(&var1, &var2, &var3));printf( "\n" );
}
