# IdLib Bit Scan
*IdLib Bit Scan* provides cross-platform (Windows and Linux) file system functionality for embedding into C programs.
*IdLib Bit Scan* is licensed under the [zlib License](LICENSE).

## Integration into your CMake project
Integrating *IdLib Bit Scan* into the sources of your CMake-based project is the intended use of *IdLib Bit Scan*.

Follow these steps to integrate this library into your CMake-based project:

- Create a directory for external dependencies within your project directory. For example `3rdparty`.
- Create a folder `idlib-bit-scan` in that directory.
- Download/checkout *IdLib Bit Scan* into that folder such that the contents of the directory in which this `README.md` file is located in directly resides under `3rdparty/idlib-bit-scan`.
- Add to your project the `3rdparty/idlib-bit-scan/CMakeLists.txt` using `add_subdirectory`.
- Link your target `YourTarget` to *IdLib Bit Scan* using `target_link_libraries(YourTarget idlib-bit-scan)`.
- In your C/C++ code, you now can include now the functionality of *IdLib Bit Scan* by adding the preprocessor include directive `#include "idlib/bit_scan.h"`.

## Building
For development (or if you really want to use prebuilt binaries), you can do standalone builds of *IdLib Bit Scan*.

*IdLib Bit Scan* has been tested to build and run both under *Windows 11* and *Linux*.
Find the build instrutions for the respective systems below:
- [Building *IdLib Bit Scan*: Windows 11/Visual Studio Community](building-under-windows-11-visual-studio-community-20222)
- [Building *IdLib Bit Scan*: Linux](building-under-linux)

## Documentation
The documentation is provided as a set of MarkDown files directly in this repository.

Start reading the documentation here [documentation/idlib-bit-scan.md](documentation/idlib-bit-scan.md).
