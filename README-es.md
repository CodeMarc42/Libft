<table width="100%">
  <tbody>
    <tr>
      <td><a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl8afmpq800110gigpyvjzcj3/project/2454232" alt="marza-ga's 42 Libft Score" /></a></td>
      <td><a href="README.md">Read in english <g-emoji class="g-emoji" alias="gb" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f1ec-1f1e7.png">🇬🇧</g-emoji></a></td>
    </tr>
  </tbody>
</table>

# Libft 
**Libft** es el primer proyecto del Core Curriculum de la Escuela 42. El objetivo de este proyecto es desarrollar una biblioteca de funciones de utilidad escritas en C que proporcionen funcionalidades comúnmente utilizadas. Con fines didácticos, mi enfoque principal fue lograr una optimización máxima. Sin embargo, también tuve en cuenta la importancia de mantener una fácil comprensión, incluso si eso significaba sacrificar algo de optimización en ciertas funciones.

## Características

- **Funciones de la Biblioteca Estándar**: `memset`, `memcpy`, `strlen`, `strcpy`,  y más.
- **Manipulación de Listas Enlazadas**: Funciones para crear, agregar, eliminar e iterar a través de listas enlazadas.
- **Manipulación de Strings**: Funciones para manipular cadenas, como `strdup`, `strjoin`, y `strtrim`.
- **Manipulación de Caracteres**: Funciones para verificar tipos de caracteres, convertir mayúsculas y minúsculas y realizar otras operaciones con caracteres.
- **Gestión de Memoria**: Funciones para la asignación y liberación dinámica de memoria, como, such as `calloc`, `bzero`.
- **Funciones Adicionales**: Varias funciones útiles, que incluyen operaciones matemáticas, manejo de archivos y más.

## Uso e Instalación

Para utilizar la biblioteca libft en tu proyecto en C, sigue estos pasos:

1. Clona el repositorio:  `git clone https://github.com/codemarc42/libft.git`
2. Incluye el archivo de encabezado `libft.h` en tu código fuente: `#include "libft.h"`
3. Compila tu proyecto con la biblioteca estática `libft.a`: `gcc -Wall -Wextra -Werror -L./libft -lft -o nombre_programa tus_archivos_fuente.c`

## Ejemplo

Aquí tienes un ejemplo simple de cómo usar una función de libft para contar el número de caracteres en una cadena:

```c
#include "libft.h"
#include <stdio.h>

int main(void) {
    const char *str = "Hello, world!";
    int length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
