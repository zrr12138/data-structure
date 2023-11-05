# Environment

- G++ needs to support C++11.

# Run

1、Create a `build` directory in the `../data-structure` directory.

```bash
mkdir build && cd build
```

2、Next, run `cmake` to configure the project and generate a native build system.

```bash
cmake ..
```

3、Then call that build system to actually compile/link the project.

```bash
cmake --build .
```

4、Run the executable.

```bash
./list/list_test
```

