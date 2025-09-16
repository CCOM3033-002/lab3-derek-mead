[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/oern3V72)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=20519775)
# Tres Números Aleatorios  

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega es 14 de febrero (miércoles) en o antes de las 10:00pm. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde.  

## Antes antes de comenzar

En programación, los **operadores lógicos** son herramientas esenciales que nos permiten combinar o modificar condiciones para tomar decisiones más complejas dentro de nuestros programas. Hasta ahora, han trabajado con estructuras de decisión como `if`, `if-else` e `if-else if`, donde las condiciones suelen evaluarse usando operadores relacionales como `>` o `==`. Sin embargo, ¿qué pasa si queremos verificar varias condiciones al mismo tiempo? Aquí es donde entran los operadores lógicos.

Los operadores lógicos en C++ son:

1. **AND lógico (`&&`)**: Evalúa a `true` solo si **todas** las condiciones son ciertas.
2. **OR lógico (`||`)**: Evalúa a `true` si **al menos una** de las condiciones es cierta.
3. **NOT lógico (`!`)**: Invierte el valor Booleano de una condición; es decir, convierte `true` en `false` y viceversa.

### Ejemplo Básico:

Imaginemos que queremos saber si un estudiante aprueba un curso, teniendo en cuenta dos condiciones:

1. Su nota final debe ser mayor o igual a 60.
2. Debe haber asistido al menos al 75% de las clases.

Podemos combinar estas condiciones con un operador lógico:

```c++
if (notaFinal >= 60.0 && asistencia >= 75.0) {
    cout << "¡Felicidades! Has aprobado el curso." << endl;
} 
else {
    cout << "Lo siento, no has aprobado." << endl;
}
```

## Antes de Comenzar 

En C++, puedes generar números aleatorios utilizando la librería `<cstdlib>`. Los números aleatorios son esenciales para diversas tareas de programación, como juegos, simulaciones y más.

Aquí tienes una guía paso a paso sobre cómo generar números aleatorios:

1. **Incluye la Librería:** 

   Al comienzo de tu programa en C++, incluye la biblioteca `<cstdlib>` en la parte superior agregando esta línea:

   ```C++
   #include<cstdlib>
   ```

2. **Inicializa el Generador de Números Aleatorios:** 

   Antes de generar números aleatorios, debes "inicializar" el generador de números aleatorios. La inicialización establece el generador con un valor de inicio, lo que garantiza que la secuencia de números aleatorios será diferente cada vez que ejecutes tu programa. Para inicializar el generador, agrega la siguiente oración **dentro** de tu función `main`:

   ```C++
   srand(time(0));
   ```

   Esta oración utiliza la función `time(0)` para proporcionar un valor de inicio diferente basado en la hora actual, lo que hace que los números generados sean menos predecibles.

   *Nota curiosa:* `time(0)` cuenta los segundos que han pasado desde el 1ro de enero del 1970.

3. **Genera un Número Aleatorio entre un Valor Mínimo y Máximo (Opcional):** 

   Por defecto, `rand()` genera un número aleatorio en un rango completo. Si deseas obtener un número aleatorio dentro de un rango específico, puedes hacerlo utilizando la fórmula:

   ```C++
   int numeroAleatorio = rand() % (maximo - minimo + 1) + minimo;
   ```

   Donde `maximo` es el valor máximo que deseas (el número más grande permitido) y `minimo` es el valor mínimo que deseas (el número más pequeño permitido). Asegúrate de incluir el `+ 1` para que el valor máximo también esté incluido en el rango. Por ejemplo, si deseas un número aleatorio entre 100 y 200:

   ```C++
   int numeroAleatorio = rand() % (200 - 100 + 1) + 100;
   ```

   Esto te proporcionará un número aleatorio entre 100 y 200, incluyendo ambos extremos del rango. 

   Recuerda que esta fórmula ajustará el rango de valores aleatorios según tus necesidades específicas.

Recuerda que los números aleatorios generados de esta manera son pseudoaleatorios, lo que significa que se determinan mediante un valor de inicio inicial. Para obtener números verdaderamente aleatorios para fines de seguridad o criptografía, se requeriría un enfoque diferente.

## Instrucciones  

Escriba un programa que genere tres números enteros aleatorios (cada vez que se ejecute el programa deben generar tres números distintos). Los números deben estar entre 0 y 100 (incluidos). Luego su programa debe ordenar los números de mayor a menor (orden descendiente)

**Ejemplos de output:**
**Ejemplo 1:**

```
Números aleatorios generados: 67, 78, 22  
Orden descendiente: 78 >= 67 >= 22
```

**Ejemplo 2:**

```
Números aleatorios generados: 68, 68, 15  
Orden descendiente: 68 >= 68 >= 15
```

## Rúbrica

Su programa debe...

- Seguir las instrucciones detalladas arriba (9 pts):
  - Utilizar la función `srand()` para establecer un _seed value_ que garantice que cada vez que se ejecute el programa se genere números aleatorios distintos (5 pts)
  - Desplegar los tres números aleatorios (no ordenados) y luego desplegarlos ordenados como en los ejemplos (4 pts)
- Tener nombres apropiados para las variables (1 pt)
- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (2 pts)
- Debe estar debidamente comentado de manera que su código sea entendible (2 pts)
  - Brinde explicaciones donde el proceso no sea obvio, incluya su razonamiento de por qué su implementación funciona.
- Debe contener un *header* en la parte superior del programa con su información y colaboraciones en un comentario (1 pt)
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Solamente utilice conceptos discutidos en clase, de otro modo perderá 1/3 de los puntos
