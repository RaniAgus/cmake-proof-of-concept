# cmake-proof-of-concept

Ejemplo de uso de CMake para compilar proyectos en C.

## Dependencias

- gcc v9.4.0 o superior
- CMake v3.22 o superior

## Run & Debug

El proyecto está configurado para ser importado desde la carpeta del repositorio
a través de [CLion] o [VSCode] con [CMakeTools] y [C++TestMate].

[CLion]: https://www.jetbrains.com/clion/features/run-and-debug.html
[VSCode]: https://code.visualstudio.com/docs/editor/debugging
[CMakeTools]: https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/README.md
[C++TestMate]: https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter

## Unit Testing

En cada branch se encuentran ejemplos de uso de distintos frameworks de testing:
  - [`test/cspec`] -- [mumuki/cspec] (en C, más simple)
  - [`test/doctest`] -- [doctest/doctest] (en C++, integrado a CLion y VSCode)
    - [`test/doctest-with-coverage`]: extra para poder [ejecutar con coverage]

No hace falta instalarlos, CMake se encarga de descargar el proyecto del
repositorio e incluirlo.

[`test/cspec`]: https://github.com/RaniAgus/cmake-proof-of-concept/compare/main...test/cspec
[mumuki/cspec]: https://github.com/mumuki/cspec

[`test/doctest`]: https://github.com/RaniAgus/cmake-proof-of-concept/compare/main...test/doctest
[doctest/doctest]: https://github.com/doctest/doctest

[`test/doctest-with-coverage`]: https://github.com/RaniAgus/cmake-proof-of-concept/compare/test/doctest...test/doctest-with-coverage
[ejecutar con coverage]: https://www.jetbrains.com/help/clion/code-coverage-clion.html

También hay un ejemplo mucho más minimalista a partir del [`tp0`].

[`tp0`]: https://github.com/RaniAgus/cmake-proof-of-concept/compare/ebc0983c4a820e02705abde049c29a7b34b74722...tp0

## Despliegue en Ubuntu Server

1. Instalar las commons:

```bash
git clone https://github.com/sisoputnfrba/so-commons-library
make -C so-commons-library install
```

2. Clonar el proyecto y configurarlo con [cmake(1)]:

```bash
git clone https://github.com/RaniAgus/cmake-proof-of-concept
cd cmake-proof-of-concept
cmake -S ./ -B ./build -DCMAKE_BUILD_TYPE=Release
```
[cmake(1)]: https://cmake.org/cmake/help/latest/manual/cmake.1.html

3. Ejecutar el ejemplo:

```bash
./build/example/example
```
