Ejemplos de implementación de punteros en C, a continuación, verán los enunciados de los diferentes ejemplos propuestos en este repositorio, los ejemplos están divididos en dos carpetas una con ejemplos simples sobre implementación básica y otra con ejemplos avanzados, en donde se les saca el mayor provecho a estos, sobre todo en el manejo de memoria del sistema. 

# Ejemplos simples 

Estos ejercicios son ideales para practicar cómo manipular punteros en C y cómo aprovecharlos para realizar diversas operaciones como intercambio de valores, recorridos de arreglos, y manipulación de cadenas.

## 1. Intercambio de Valores con Punteros

Escribe una función que reciba dos punteros a enteros y cambie el valor de las dos variables a las que apuntan. La función debe intercambiar los valores sin utilizar variables adicionales.

**Requisitos:**

Crear una función intercambiar(int *a, int *b) que intercambie los valores a los que apuntan los punteros a y b.
En el main(), probar la función con dos variables de tipo entero.

## 2. Suma de Elementos en un Arreglo Usando Punteros
Escribe una función que reciba un arreglo de enteros y su tamaño, y calcule la suma de todos sus elementos utilizando punteros.

**Requisitos:**

Crear una función sumar_arreglo(int *arr, int n) que reciba un puntero al arreglo y el tamaño del arreglo.
La función debe devolver la suma total de los elementos del arreglo.
En el main(), declarar un arreglo de enteros, llamarla función y mostrar el resultado.

## 3. Contar Caracteres en una Cadena Usando Punteros
Escribe una función que reciba una cadena de texto (un arreglo de caracteres) y cuente cuántos caracteres tiene, sin usar el operador sizeof ni funciones de librería como strlen().

**Requisitos:**

Crear una función contar_caracteres(char *str) que reciba un puntero a la cadena.
La función debe devolver el número de caracteres en la cadena (sin contar el carácter nulo '\0').
En el main(), prueba la función con varias cadenas y muestra el resultado.

## 4. Almacenar y Mostrar el Doble de un Número
Escribe una función que reciba un puntero a un número y actualice su valor multiplicándolo por dos. Luego, en el main(), imprime el valor original y el modificado.

**Requisitos:**

Crear una función doblar_valor(int *x) que reciba un puntero al número y lo multiplique por 2.
Mostrar antes y después de llamar a la función, el valor de la variable original.

## 5. Encontrar el Valor Máximo en un Arreglo de Enteros Usando Punteros
Escribe una función que reciba un arreglo de enteros y su tamaño, y devuelva el valor máximo del arreglo utilizando punteros.

**Requisitos:**

Crear una función encontrar_maximo(int *arr, int n) que reciba el arreglo y su tamaño.
La función debe devolver el valor máximo en el arreglo.
En el main(), probar la función con un arreglo de números y mostrar el valor máximo encontrado.

# Casos de uso de punteros  

En la carpeta **CasosdeUso** te propongo una serie de ejercicios más reales, que muestran cómo los punteros son útiles en situaciones más cercanas a problemas complejos donde hay limitaciones de memoria, necesidades de manipulación eficiente de datos o interacciones complejas entre funciones. Los punteros son fundamentales para optimizar el uso de la memoria y para crear estructuras de datos dinámicas y flexibles.

## 1. Manejo Dinámico de Memoria: Creación de un Arreglo de Tamaño Dinámico

Imagina que tienes que crear un programa donde el tamaño de un arreglo no es conocido de antemano. Debes pedir al usuario que ingrese el tamaño del arreglo y luego almacenar una cantidad variable de números enteros.

**Problema:** Escribe un programa en C que use punteros para crear un arreglo de tamaño dinámico, asignado en tiempo de ejecución con malloc. El programa debe permitir al usuario ingresar valores para los elementos del arreglo y luego calcular la suma de estos valores.

**Beneficio del uso de punteros:**

- Usamos malloc para crear un arreglo de tamaño dinámico en función de la entrada del usuario.
- La memoria se libera después de usarse con free, evitando fugas de memoria.
- Sin punteros, tendríamos que manejar arreglos estáticos, lo que no es posible cuando no sabemos el tamaño del arreglo de antemano.

## 2. Estructuras de Datos Dinámicas: Implementación de una Lista Enlazada

En este caso, una lista enlazada es una estructura de datos que permite almacenar una secuencia de elementos de tamaño variable, donde cada elemento apunta al siguiente. Este es un ejemplo clásico en el que los punteros son fundamentales.

**Problema:** Implementa una lista enlazada simple donde los elementos son números enteros. Debes permitir al usuario insertar elementos al final de la lista y luego mostrar todos los elementos de la lista.

**Beneficio del uso de punteros:**

- Usamos punteros para gestionar dinámicamente la memoria de cada nodo y las relaciones entre ellos. La lista crece o disminuye según sea necesario, sin restricciones de tamaño fijo como en los arreglos.
- Esta es la base de muchas estructuras de datos avanzadas (pilas, colas, listas dobles enlazadas, árboles, etc.).

## 3. Paso de una Estructura Compleja a una Función (Modificación de Estructura Mediante Punteros)

En muchos casos, las estructuras son pasadas por referencia a las funciones para modificar sus campos. Sin punteros, sería más complicado modificar directamente los valores dentro de una estructura desde una función.

**Problema:** Crea una estructura Persona con campos como nombre, edad y salario. Luego, usa un puntero para modificar estos valores dentro de una función.

**Beneficio del uso de punteros:**

- Usamos punteros para modificar directamente los campos de la estructura Persona sin necesidad de devolverla desde la función. Esto es más eficiente que retornar una estructura copiada.
- En aplicaciones grandes, pasar grandes estructuras por valor puede ser costoso en términos de rendimiento, y los punteros permiten hacerlo de forma eficiente.

## 4. Función de Comparación: Uso de Punteros con Funciones de Ordenamiento

Los punteros también son útiles cuando se necesita manipular los datos de un arreglo de forma eficiente, como al implementar algoritmos de ordenamiento, donde se pasan punteros a funciones de comparación.

**Problema:** Implementa un algoritmo de ordenamiento usando el método de burbuja, pasando punteros a las funciones de intercambio.

**Beneficio del uso de punteros:**

- Usamos punteros para manipular directamente los elementos del arreglo dentro de la función de intercambio. Esto mejora la eficiencia al evitar la necesidad de hacer copias adicionales de los elementos.