# Intercambio de Valores utilizando Punteros en C++

Este programa en C++ demuestra cómo intercambiar dos valores utilizando punteros. Se emplea una función llamada `swap` para intercambiar los valores de dos variables sin necesidad de usar una variable temporal adicional fuera de la función.

## Propósito del Código

El objetivo de este programa es mostrar cómo se pueden intercambiar los valores de dos variables a través de punteros. La función `swap` toma las direcciones de memoria de las dos variables y utiliza un puntero para realizar el intercambio de valores de forma eficiente.

## ¿Qué incluye el código?

1. **Función `swap`**
   - La función `swap` toma dos punteros como parámetros, uno apuntando a cada una de las variables que se desean intercambiar. 
   - La función intercambia los valores de las dos variables utilizando una variable temporal dentro de la propia función.
     ```cpp
     void swap(int* a, int* b) {
         int temp = *a;
         *a = *b;
         *b = temp;
     }
     ```
   - **Explicación**:
     - `*a` y `*b` se utilizan para acceder a los valores de las variables a las que apuntan los punteros `a` y `b`.
     - La variable temporal `temp` almacena el valor de `*a` antes de que se sobrescriba, permitiendo asignar el valor de `*b` a `*a` y viceversa.

2. **Interacción con el Usuario**
   - El programa inicializa dos variables `x` y `y` con los valores `5` y `10`, respectivamente, y luego muestra sus valores antes de realizar el intercambio.
     ```cpp
     int x = 5, y = 10;
     cout << "Antes del intercambio: x = " << x << ", y = " << y << endl;
     ```
   
3. **Intercambio de Valores**
   - A continuación, la función `swap` es llamada pasando las direcciones de las variables `x` y `y` utilizando el operador `&`:
     ```cpp
     swap(&x, &y);
     ```
   - Después del intercambio, se muestran los valores actualizados de las variables `x` y `y`.
     ```cpp
     cout << "Después del intercambio: x = " << x << ", y = " << y << endl;
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ intercambioDeValoresUsandoPunteros.cpp -o intercambioDeValoresUsandoPunteros
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./intercambioDeValoresUsandoPunteros
     ```

3. **Resultado Esperado**
   - El programa mostrará los valores de las variables `x` y `y` antes y después del intercambio. Por ejemplo:
     ```plaintext
     Antes del intercambio: x = 5, y = 10
     Después del intercambio: x = 10, y = 5
     ```

## Características Técnicas

- **Uso de punteros**: El programa utiliza punteros para manipular las direcciones de memoria de las variables `x` y `y`. Esto permite modificar directamente los valores de las variables dentro de la función `swap`.
- **Intercambio eficiente**: Al usar punteros, el intercambio de valores se realiza sin la necesidad de retornar valores o utilizar variables globales.
  
## Personalización

Puedes modificar este programa para trabajar con más de dos variables, o incluso adaptarlo para intercambiar valores de tipos de datos diferentes cambiando los tipos de las variables y los punteros.

## Autor

Este programa fue creado como ejemplo para mostrar el uso de punteros en C++ y cómo realizar un intercambio de valores mediante manipulación directa de direcciones de memoria.

¡Experimenta con el código y aprende cómo funcionan los punteros en C++!
