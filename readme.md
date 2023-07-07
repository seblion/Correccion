
# Readme: Anotaciones De Clase Programacion I

## **Nombre: Juan Sebastian Leon Espinosa**

## **Fecha: 06/07/2023**


### Git

Es un sistema de control de versiones que sirve ampliamente para la gestión de proyectos de programación colaborativos. 

#### Comandos de Git en consola


### VISUAL STUDIO

#### atajos del teclado

- selector multicursor => CTRL+D
- abrir rapido => CTRL+P
- mostrar barra lateral => CTRL+B
- Copiar linea => SHIFT+ALT+UP or SHIFT+ALT+DOWN

#### Comandos de la consola

- *ls:* Lista los archivos y directorios.
- *cd:* Cambia el directorio actual al directorio especificado.
- *pwd:* Muestra la ruta de acceso del directorio actual.
- *mkdir:* Crea un nuevo directorio.
- *rm:* Elimina archivos y directorios.
- *cp:* Copia archivos y directorios.
- *mv:* Mueve archivos y directorios.
- *cat:* Muestra el contenido de un archivo.

## Lenguaje C

El lenguaje C es "Case Sensitive".

### Tipos de variables

- *int :* (enteros)

    int a;       // declarar

    int b=5;    // inicializar

- *float :* (decimales)

    float f1 = 1.01, f2 = 2.02

- *char:* (caracter)

    char caracter ='*'

- *string:* (cadena de caracteres)

    string cadena ="muy utilizado"

- *Valor booleano:*

    True / False

### Librerias

#### generales

- include "stdio.h" (informacion acerca de la biblioteca estandar)

- include "stdlib.h" (funcionalidades varias)

- include "math.h" ( funciones y constantes matematicas para realizar calculos numericos.)

#### personales

- include "../lib/Utility.h" (escribir la dirección del archivo y su nombre)

### Inicio de lectura del script

main     //define una funcion que no recibe valores ni argumentos.

ejemplo:
int main () { "return" } //para devolver un valor

void main () { } //no devuelve valores

### Condicionales
- if => si lo que esta entre parentesis es verdadero se ejecuta el codigo que se encuentra entre las llaves.
  
- else => si lo que estaba entre los parentesis del if es falso se ejecuta el codigo que esta dentro de las llaves a continuacion del else.
  
```cpp
 if ()
 {
 
 }


if ()
{ 

} else {

}


if ()
{ 

} else if () {

}
```
### bucles

Repetir una accion cierta cantidad de veces o
hasta que se cumpla una condicion
- *for:*
- for () {}

- while () {}

- do {} while ()

### Diagrama de flujo

![Imagen diagrama de flujo](https://www.smartdraw.com/flowchart/img/simbolos-de-diagramas-de-flujo.png)

### Refactorizar

- Se pueden crear procesos y funciones para utilizar dentro del main.
- Se agiliza el proceso al tener mas orden.
- Estos procesos y funciones pueden ser almacenados en librerias locales.

#### Procedimiento

void NombreProcedimiento() {…}

- *Con parametros*

void NombreProcedimiento(param1, param1, ..) {…}

#### Función

int NombreFunción()
{… return 0 }

- *Función con parametros*

int NombreFunción(para1, param1, ..)
{… return 0 }

### Secuencias de escape

- '\r' Retorno de carro
- '\t' Tabular
- '\n' Enter
- '\b' Retroceso

### funciones de las librerias

- scanf("%i",& a) //Para recibir un valor de la consola
gets()
- printf("%i", a) //Para imprimir un valor en consola
- fflush(stdin) //Rompe el flujo de codigo

### Uso del switch

- Se debe  ingresar un valor entre parentesis.
- se realiza la accion correspondiente al caso.

```cpp
switch()

{

    case 1:

        break;

    case 2:

        break;

    case 3:

        break;

    default:

        break;

}
```

### Operadores logicos

- && // and
- || // or
- == // igual
- != // diferente a

## C++

### Librerias principales

iostream //operaciones de entrada y salida en la consola

### funciones de librerias

- cout <<  //para imprimir en consola
- cin >>   //para obtener los datos del flujo de entrada

### Strings

Los strings son cadenas de caracteres que tienen, las que son más fáciles de 
### Otras funciones
- strcpy() //

#### try - catch
Protege cuando hay un error, cuando no funciona algo en el codigo escrito dentro del try, se ejecuta lo que esta en el catch.

```cpp
try
{

}catch()
{

}
```

#### Throw

Sirve para provocar un error a proposito
