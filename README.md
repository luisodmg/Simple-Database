# Simple-Database (C++)

A minimal, educational C++ project demonstrating a tiny in-memory "database" of people, students, and professors.

## Overview

This repository contains a small example program that models people using simple classes (`Person`, `Student`, `Professor`) and demonstrates basic object-oriented design, compilation, and execution for learners.

## Features

- Minimal, easy-to-read C++ code.
- Clear separation of header and implementation files.
- Example `main.cpp` that constructs and prints objects.

## Repository structure

- `main.cpp` — program entry point, example usage and output.
- `person.h` / `person.cpp` — base `Person` class and implementation.
- `student.h` / `student.cpp` — `Student` class (derives from `Person`).
- `professor.h` / `professor.cpp` — `Professor` class (derives from `Person`).

## Building

You only need a C++17-compatible compiler. Examples below assume all source files are in the project root.

- Build with g++ (Linux, macOS, MinGW on Windows):

```
g++ -std=c++17 -O2 -Wall -Wextra -o SimpleDatabase main.cpp person.cpp student.cpp professor.cpp
```

- Build with Microsoft Visual C++ (Developer Command Prompt):

```
cl /EHsc main.cpp person.cpp student.cpp professor.cpp
```

If you prefer an out-of-source or multi-configuration build, creating a small `CMakeLists.txt` and using CMake is recommended.

## Running

After building, execute the produced binary.

- On Windows (the executable will be `SimpleDatabase.exe`):

```
SimpleDatabase.exe
# or from PowerShell: .\SimpleDatabase.exe
```

- On macOS and Linux (executable named `SimpleDatabase`):

```
./SimpleDatabase
```

The program prints example output constructed in `main.cpp`. If you want to add interactive input or file-based persistence, extend `main.cpp` accordingly.

## Build (CMake)

This project includes a simple [CMakeLists.txt](CMakeLists.txt) for cross-platform builds. Recommended out-of-source build steps:

```
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

On Windows with Visual Studio generators, use the `--config` flag to choose `Release` or `Debug`, and run the produced `SimpleDatabase.exe` from the build output folder.

## Added files

- [CMakeLists.txt](CMakeLists.txt): cross-platform build script compatible with CMake 3.10+.
- [LICENSE](LICENSE): MIT license template. Replace the copyright holder name where indicated.

## Usage & Examples

The current `main.cpp` provides a simple example of constructing `Student` and `Professor` objects and printing their details. To test changes quickly:

1. Modify or extend classes in the `*.cpp` / `*.h` files.
2. Recompile using the build commands above.
3. Run the binary and inspect stdout for expected behavior.

## Extending the project

- Adding a new record type (for example, `Staff`):
  1. Create `staff.h` and `staff.cpp`.
  2. Implement the class (optionally deriving from `Person`).
  3. Update `main.cpp` to create and use `Staff` objects.
  4. Rebuild using the build commands above.

- If you want persistent storage, integrate a small file format (CSV, JSON) or a lightweight embedded database.

## Contributing

Contributions are welcome. Typical workflow:

1. Fork the repository.
2. Create a feature branch.
3. Implement tests or manual verification steps if appropriate.
4. Open a pull request with a clear description of your changes.

## Tests

There are no automated tests included in this repository. Adding a small unit test suite (e.g., using Catch2 or GoogleTest) is recommended for larger changes.

## License

No license is specified. If you intend to publish or share this project, add a `LICENSE` file (for example, the MIT license) to make the terms explicit.

---

If you want, I can also:

- Add a `CMakeLists.txt` for cross-platform builds.
- Add a small example run output and a screenshot of the expected output.
- Create a basic `LICENSE` file (MIT/Apache/etc.).

