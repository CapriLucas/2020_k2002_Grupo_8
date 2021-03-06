#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
struct Nodo1
{
     int nro;
     char *cadena;
     struct Nodo1 *sig;
};
struct Nodo2
{
     char *cadena;
     struct Nodo2 *sig;
};
struct Nodo3
{
     double mantisa;
     int entera;
     char *cadena;
     struct Nodo3 *sig;
};
struct Nodo1 *id = NULL;
struct Nodo1 *lt = NULL;
struct Nodo2 *pr = NULL;
struct Nodo1 *coct = NULL;
struct Nodo1 *chex = NULL;
struct Nodo1 *cdec = NULL;
struct Nodo3 *cre = NULL;
struct Nodo2 *ccar = NULL;
struct Nodo1 *cop = NULL;
struct Nodo1 *cpu = NULL;
struct Nodo2 *coml = NULL;
struct Nodo2 *comml = NULL;
struct Nodo1 *ccarno = NULL;
struct Nodo1 *dir = NULL;

//Ordena y agrega alfabeticamente la lista de identificadores, la cadena yytext y un entero, devuelve la lista actualizada
struct Nodo1 *ordenarAgregarIdentificadores(struct Nodo1 *punt, char *cad, int numero)
{
     struct Nodo1 *nuevo = (struct Nodo1 *)malloc((strlen(cad) + 1) * sizeof(struct Nodo1));
     nuevo->cadena = cad;
     nuevo->nro = numero;
     nuevo->sig = NULL;
     struct Nodo1 *aux = punt;
     struct Nodo1 *ant = NULL;
     while (aux != NULL && strcasecmp(aux->cadena, cad) <= 0)
     {
          ant = aux;
          aux = aux->sig;
     }

     if (ant == NULL)
     {
          punt = nuevo;
     }
     else
     {
          ant->sig = nuevo;
     }

     nuevo->sig = aux;

     return punt;
}
//Agrega a la lista dada en el parametro, la cadena yytext y un entero, devuelve la lista actualizada
struct Nodo1 *agregarALista(struct Nodo1 *puntero, char *cadenaNueva, int numero)
{
     struct Nodo1 *nuevo = (struct Nodo1 *)malloc((strlen(cadenaNueva) + 1) * sizeof(struct Nodo1));
     nuevo->cadena = cadenaNueva;
     nuevo->nro = numero;
     nuevo->sig = NULL;
     if (puntero != NULL)
     {
          struct Nodo1 *aux = puntero;
          while (aux->sig != NULL)
          {

               aux = aux->sig;
          }
          aux->sig = nuevo;
     }
     else
     {
          puntero = nuevo;
     }
     return puntero;
}
//Agrega a la lista dada en el parametro, la cadena yytext, devuelve la lista actualizada
struct Nodo2 *agregarALista2(struct Nodo2 *puntero, char *cadenaNueva)
{
     struct Nodo2 *nuevo = (struct Nodo2 *)malloc((strlen(cadenaNueva) + 1) * sizeof(struct Nodo2));
     nuevo->cadena = cadenaNueva;
     nuevo->sig = NULL;
     if (puntero != NULL)
     {

          struct Nodo2 *aux = puntero;
          while (aux->sig != NULL)
          {

               aux = aux->sig;
          }
          aux->sig = nuevo;
     }
     else
     {
          puntero = nuevo;
     }
     return puntero;
}
//Agrega a la lista de constantes reales, la cadena yytext, una parte entera y una real, devuelve la lista actualizada
struct Nodo3 *agregarALista3(struct Nodo3 *puntero, char *cadenaNueva, int ent, double mant)
{
     struct Nodo3 *nuevo = (struct Nodo3 *)malloc((strlen(cadenaNueva) + 1) * sizeof(struct Nodo3));
     nuevo->mantisa = mant;
     nuevo->entera = ent;
     nuevo->cadena = cadenaNueva;
     nuevo->sig = NULL;
     if (puntero != NULL)
     {
          struct Nodo3 *aux = puntero;
          while (aux->sig != NULL)
          {
               aux = aux->sig;
          }
          aux->sig = nuevo;
     }
     else
     {
          puntero = nuevo;
     }
     return puntero;
}

//Busca en la lista tipo Nodo1 dada en el parametro, una cadena que coincida con cad y devuelve donde se encontro
struct Nodo1 *buscarCadena(struct Nodo1 *puntero, char *cad)
{
     struct Nodo1 *aux = puntero;
     while (aux != NULL && strcmp(aux->cadena, cad) != 0)
     {
          aux = aux->sig;
     }
     return aux;
}
//Busca en la lista tipo Nodo2 dada en el parametro, una cadena que coincida con cad y devuelve donde se encontro
struct Nodo2 *buscarCadena2(struct Nodo2 *puntero, char *cad)
{
     struct Nodo2 *aux = puntero;
     while (aux != NULL && strcmp(aux->cadena, cad) != 0)
     {
          aux = aux->sig;
     }
     return aux;
}
//Busca en la lista tipo Nodo3 dada en el parametro, una cadena que coincida con cad y devuelve donde se encontro
struct Nodo3 *buscarCadena3(struct Nodo3 *puntero, char *cad)
{
     struct Nodo3 *aux = puntero;
     while (aux != NULL && strcmp(aux->cadena, cad) != 0)
     {
          aux = aux->sig;
     }
     return aux;
}
//Suma todos los valores de la lista de constantes decimales
int sumarDecimales(struct Nodo1 *dec)
{
     struct Nodo1 *aux = dec;
     int total = 0;
     while (aux != NULL)
     {
          total = total + atoi(aux->cadena) * aux->nro;
          aux = aux->sig;
     }
     return total;
}
//Verifica que la cadena yytext no se repita y agregue en la lista tipo Nodo1 dada, acumula las veces que se repitio
struct Nodo1 *verificarCadena(struct Nodo1 *punt, char *cadena)
{
     char *palabra = (char *)malloc((strlen(cadena) + 1) * sizeof(char *));
     strcpy(palabra, cadena);
     struct Nodo1 *cadbus = buscarCadena(punt, palabra);
     if (cadbus == NULL)
     {
          punt = agregarALista(punt, palabra, 1);
     }
     else
     {
          cadbus->nro++;
     }
     return punt;
}
//Verifica que la cadena yytext no se repita y agregue en la lista ordenada tipo Nodo1 dada, acumula las veces que se repitio
struct Nodo1 *verificarCadena5(struct Nodo1 *punt, char *cadena)
{
     char *palabra = (char *)malloc((strlen(cadena) + 1) * sizeof(char *));
     strcpy(palabra, cadena);
     struct Nodo1 *cadbus = buscarCadena(punt, palabra);
     if (cadbus == NULL)
     {
          punt = ordenarAgregarIdentificadores(punt, palabra, 1);
     }
     else
     {
          cadbus->nro++;
     }
     return punt;
}
//Verifica que la cadena yytext se agregue en la lista tipo Nodo1 dada
struct Nodo1 *verificarCadena2(struct Nodo1 *punt, char *cadena, int cant)
{
     char *palabra = (char *)malloc((strlen(cadena) + 1) * sizeof(char *));
     strcpy(palabra, cadena);
     punt = agregarALista(punt, palabra, cant);
     return punt;
}
//Verifica que la cadena yytext se agregue en la lista tipo Nodo2 dada
struct Nodo2 *verificarCadena3(struct Nodo2 *punt, char *cadena)
{
     char *palabra = (char *)malloc((strlen(cadena) + 1) * sizeof(char *));
     strcpy(palabra, cadena);
     punt = agregarALista2(punt, palabra);
     return punt;
}
//Verifica que la cadena yytext se agregue en la lista tipo Nodo3 dada
struct Nodo3 *verificarCadena4(struct Nodo3 *punt, char *cadena)
{
     double entera;
     char *palabra = (char *)malloc((strlen(cadena) + 1) * sizeof(char *));
     strcpy(palabra, cadena);
     double mantisa = modf(atof(cadena), &entera);
     punt = agregarALista3(punt, palabra, entera, mantisa);
     return punt;
}
//Muestra de la lista tipo Nodo1 dada, su cadena y su nro entero
void mostrarLista1(struct Nodo1 *ident)
{
     struct Nodo1 *aux = ident;
     while (aux != NULL)
     {
          printf("%s --- %d\n", aux->cadena, aux->nro);
          aux = aux->sig;
     }
}
//Muestra de la lista tipo Nodo2 dada, su posicion en que fue encontrada y su cadena
void mostrarLista2(struct Nodo2 *ident)
{
     struct Nodo2 *aux = ident;
     int i = 1;
     while (aux != NULL)
     {
          printf("%d --- %s\n", i, aux->cadena);
          aux = aux->sig;
          i++;
     }
}
//Muestra de la lista tipo Nodo3 dada, su cadena, su nro entero y su mantisa
void mostrarLista3(struct Nodo3 *ident)
{
     struct Nodo3 *aux = ident;
     while (aux != NULL)
     {
          printf("%s %d %f\n", aux->cadena, aux->entera, aux->mantisa);
          aux = aux->sig;
     }
}
//Devuelve la cadena sin las comillas que admitio el yytext
char *devolverCadenaSinComillas(char *cadena)
{
     char *palabra = (char *)malloc((strlen(cadena) + 1) * sizeof(char *));
     int i = 0;
     while (cadena[i] != '\0')
     {
          cadena[i] = cadena[i + 1];
          i++;
     }
     cadena[strlen(cadena) - 1] = '\0';
     i = 0;
     while (cadena[i] != '\0')
     {
          if (cadena[i] == '\\' && cadena[i + 1] == '"')
          {
               while (cadena[i] != '\0')
               {
                    cadena[i] = cadena[i + 1];
                    i++;
               }
               i = 0;
          }
          i++;
     }
     strcpy(palabra, cadena);
     return palabra;
}
//Imprime el listado de las constantes pedidas
void imprimirConstantes()
{
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de constantes decimales encontradas y el total acumulado:\n");
     mostrarLista1(cdec);
     printf("El total acumulado es: %d\n", sumarDecimales(cdec));
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de constantes octales encontradas y su valor en decimal:\n");
     mostrarLista1(coct);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de constantes hexadecimales encontradas y su valor en decimal:\n");
     mostrarLista1(chex);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de constantes reales encontradas junto con la parte entera y el valor de su mantisa:\n");
     mostrarLista3(cre);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de constantes caracter encontradas segun su orden de aparicion:\n");
     mostrarLista2(ccar);
}
//Imprime el reporte completo pedido
void generarReporteCompleto()
{
     printf("Listado de identificadores encontrados ordenados alfabeticamente y su cantidad de veces: \n");
     mostrarLista1(id);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de literales cadena encontrados y la longitud de los mismos:\n");
     mostrarLista1(lt);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de palabras reservadas encontradas en el orden en el que se encontraron:\n");
     mostrarLista2(pr);
     imprimirConstantes();
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de caracteres de puntuacion encontrados y la cantidad de veces que aparecen:\n");
     mostrarLista1(cpu);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de operadores encontrados y la cantidad de veces que aparecen:\n");
     mostrarLista1(cop);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de comentarios encontrados multilinea:\n");
     mostrarLista2(comml);
     printf("Listado de comentarios encontrados simples:\n");
     mostrarLista2(coml);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de cadenas y caracteres no reconocidos con su numero de linea:\n");
     mostrarLista1(ccarno);
     printf("-------------------------------------------------------------------------\n\n");
     printf("Listado de cadenas y directivas con su numero de linea:\n");
     mostrarLista1(dir);
}

void opciones()
{
     printf("\nINGRESE LA OPCION DE LO QUE DESEA HACER:\n\n");
     printf("1)  Generar listado de identificadores\n");
     printf("2)  Generar listado de literales cadenas\n");
     printf("3)  Generar listado de palabras reservadas\n");
     printf("4)  Generar listado de constantes\n");
     printf("5)  Generar listado de operadores\\caracteres de puntuacion\n");
     printf("6)  Generar listado de comentarios \n");
     printf("7)  Generar listado de cadenas\\caracteres no reconocidos\n");
     printf("8)  Generar listado de directivas\n");
     printf("9)  Generar reporte completo\n");
     printf("10) Salir del reporte\n");
}

void imprimirOpcionesReporte()
{

     int opcionIngresada;
     printf("-------------------------------------------------------------------------");
     printf("\n\t\t\tOPCIONES DISPONIBLES:\n");
     printf("-------------------------------------------------------------------------\n\n");
     do
     {
          opciones();
          scanf("%d", &opcionIngresada);
          switch (opcionIngresada)
          {
          case 1:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 1: GENERAR LISTA DE IDENTIFICADORES.\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de identificadores encontrados ordenados alfabeticamente y su cantidad de veces: \n");
               mostrarLista1(id);
               break;

          case 2:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 2: GENERAR LISTA DE LITERALES CADENA.\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de literales cadena encontrados y la longitud de los mismos:\n");
               mostrarLista1(lt);
               break;

          case 3:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 3: GENERAR LISTA DE PALABRAS RESERVADAS.\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de palabras reservadas encontradas en el orden en el que se encontraron:\n");
               mostrarLista2(pr);
               break;

          case 4:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 4: GENERAR LISTA DE CONSTANTES .\n");
               imprimirConstantes();
               break;
          case 5:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 5: GENERAR LISTA DE OPERADORES/CARACTERES DE PUNTUACION.\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de caracteres de puntuacion encontrados y la cantidad de veces que aparecen:\n");
               mostrarLista1(cpu);
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de operadores encontrados y la cantidad de veces que aparecen:\n");
               mostrarLista1(cop);
               break;

          case 6:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 6: GENERAR LISTA DE COMENTARIOS.\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de comentarios encontrados multilinea:\n");
               mostrarLista2(comml);
               printf("Listado de comentarios encontrados simples:\n");
               mostrarLista2(coml);
               break;

          case 7:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 7: GENERAR LISTA DE CARACTERES NO RECONOCIDOS.\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de cadenas y caracteres no reconocidos con su numero de linea:\n");
               mostrarLista1(ccarno);
               break;

          case 8:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 8: GENERAR LISTA DE DIRECTIVAS.\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("Listado de cadenas y directivas con su numero de linea:\n");
               mostrarLista1(dir);
               break;

          case 9:
               printf("-------------------------------------------------------------------------");
               printf("\nUSTED INGRESO LA OPCION 9: GENERAR REPORTE COMPLETO.\n");
               printf("-------------------------------------------------------------------------\n");
               printf("\nREPORTE GENERADO EXITOSAMENTE.\n\n");
               printf("-------------------------------------------------------------------------\n\n");
               printf("\nREPORTE:\n\n");
               generarReporteCompleto();
               break;
          }

          system("pause");
          system("cls");

     } while (opcionIngresada != 10);
     printf("-------------------------------------------------------------------------");
     printf("\n\t\t\tREPORTE FINALIZADO\n\n");
     printf("-------------------------------------------------------------------------\n\n");
}
