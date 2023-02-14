# 4-Contenedoras

## Vector y unordered_map

**Objetivo**
* Practicar la adición, eliminación, consulta y modificación de elementos usando la clase contenedora `vector`, `iteradores` y `unordered_map`. 
* Usar algoritmos propios de los contenedores para insertar, eliminar y encontrar elementos.

**REGLA**: Los métodos de la clase Refugio NO deben pedir valores por consola, todos los valores le deben llegar como parámetros de los métodos. Los valores se deben pedir al usuario desde el main 

* Agregue el método en la clase Refugio para agregar un perro nuevo tanto en un vector como en un mapa no ordenado. Observe la diferencia entre ambas implementaciones. 
  Para el caso del mapa no ordenado la llave será el id del Perro y el valor un apuntador a la clase Perro.
* Agrege una funcion en el main que pida los datos básicos del perro y llame al método que creó en el punto anterior de la clase Refugio para agregar el nuevo perro en el mapa no ordenado y en el vector
* Agrege un método en la clase Refugio para mostrar los Perros que están disponibles. A manera de ejercicio use este método para mostrar tanto los perros que estan en el Vector como los que están en el mapa. Cada colección requiere su propio ciclo. 
* Agrege un método en la clase Refugio que retorne True si dado un id de Perro que se recibe por parámetro el perro se encuentra en el Vector y False en caso contrario. 
* Agrege un método en la clase Refugio para eliminar un Perro del mapa dado el Id si el perro se encuentra en el mapa no ordenado. Note cómo es mucho más sencillo identificar si un elemento se encuentra o no en una colección cuando se usan mapas.
* Agregue las opciones del menu en el main para probar todas las funcionalidades


## Fuentes de consulta
* Sobre STL  y contenedores [https://dev.to/pratikparvati/c-stl-containers-choose-your-containers-wisely-4lc4]
* Iteradores:   https://www.geeksforgeeks.org/introduction-iterators-c/
* Algoritmos por contenedor
    * Deque: https://www.geeksforgeeks.org/deque-cpp-stl/?ref=lbp
    * https://www.javatpoint.com/cpp-vector
    * https://www.javatpoint.com/post/cpp-list
    * https://www.javatpoint.com/cpp-set
    * Map: https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/?ref=leftbar-rightbar
    * Unordered map: https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/