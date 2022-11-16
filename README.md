# cmake-proof-of-concept

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

No hace falta instalarlos, CMake se encarga de descargar el proyecto del
repositorio e incluirlo.

[`test/cspec`]: https://github.com/RaniAgus/cmake-proof-of-concept/tree/test/cspec
[mumuki/cspec]: https://github.com/mumuki/cspec

[`test/doctest`]: https://github.com/RaniAgus/cmake-proof-of-concept/tree/test/doctest
[doctest/doctest]: https://github.com/doctest/doctest
