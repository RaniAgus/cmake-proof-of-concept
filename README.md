# cmake-proof-of-concept

## Dependencias

- CMake 3.22 o superior
- [doctest v2.4.9]

```bash
wget -qO- https://github.com/doctest/doctest/archive/refs/tags/v2.4.9.tar.gz | tar xvz
cd doctest-2.4.9
cmake .
make
sudo make install
```

[doctest v2.4.9]: https://github.com/doctest/doctest

## Run & Debug

El proyecto está configurado para ser importado desde la carpeta del repositorio
a través de [CLion] o [VSCode] con [CMakeTools] y [C++TestMate].

[CLion]: https://www.jetbrains.com/clion/features/run-and-debug.html
[VSCode]: https://code.visualstudio.com/docs/editor/debugging
[CMakeTools]: https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/README.md
[C++TestMate]: https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter
