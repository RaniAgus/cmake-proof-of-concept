# cmake-proof-of-concept

Example of using CMake to compile C projects.

## Dependencias

- gcc v9.4.0 or higher
- CMake v3.22 or higher

## Run & Debug

This project is configured to be imported from the repository root
via [CLion] or [VSCode] with [CMakeTools] and [C++TestMate].

[CLion]: https://www.jetbrains.com/clion/features/run-and-debug.html
[VSCode]: https://code.visualstudio.com/docs/editor/debugging
[CMakeTools]: https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/README.md
[C++TestMate]: https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter

## Unit Testing

Each branch contains examples of using different testing frameworks:
  - [`test/cspec`] -- [mumuki/cspec] (in C, simpler)
  - [`test/doctest`] -- [doctest/doctest] (in C++, built into CLion and VSCode)

There's no need to install them, CMake takes care of downloading the dependency
from the repository and include it.

[`test/cspec`]: https://github.com/RaniAgus/cmake-proof-of-concept/compare/main...test/cspec
[mumuki/cspec]: https://github.com/mumuki/cspec

[`test/doctest`]: https://github.com/RaniAgus/cmake-proof-of-concept/compare/main...test/doctest
[doctest/doctest]: https://github.com/doctest/doctest

## Despliegue en Ubuntu Server

1. Install the commons library:

```bash
git clone https://github.com/sisoputnfrba/so-commons-library
make -C so-commons-library install
```

2. Clone the project and configure it with [cmake(1)]:

```bash
git clone https://github.com/RaniAgus/cmake-proof-of-concept
cd cmake-proof-of-concept
cmake -S ./ -B ./build -DCMAKE_BUILD_TYPE=Release
```
[cmake(1)]: https://cmake.org/cmake/help/latest/manual/cmake.1.html

3. Run the example:

```bash
./build/example/example
```
