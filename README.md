# PPM Image Viewer

A simple PPM (Portable Pixmap) image viewer built with SFML (Simple and Fast Multimedia Library). This application allows you to view PPM image files in both P3 (ASCII) and P6 (binary) formats.

## Features

- Supports PPM image formats: P3 (ASCII) and P6 (binary)
- Simple and intuitive interface
- Cross-platform compatibility (Windows, Linux, macOS)
- Real-time rendering using SFML

## Prerequisites

- C++ compiler with C++11 or later
- CMake (version 3.10 or later)
- SFML library (version 2.5.1 or later)

## Installation

### Linux (Ubuntu/Debian)
```bash
# Install SFML and build tools
sudo apt-get install libsfml-dev build-essential cmake

# Clone the repository
git clone https://github.com/yourusername/ppm-image-viewer.git
cd ppm-image-viewer

# Create build directory and compile
mkdir build && cd build
cmake ..
make
```

### Windows
1. Install CMake from https://cmake.org/download/
2. Download and install SFML from https://www.sfml-dev.org/download.php
3. Generate project files using CMake GUI or command line
4. Open the generated solution in Visual Studio and build the project

## Usage

Run the program from the command line with the path to your PPM file:

```bash
./IMV path/to/your/image.ppm
```

## Controls

- Close the window to exit the application

## Supported Formats

- P3 (PPM ASCII)

## Building from Source

1. Clone the repository
2. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```
3. Run CMake:
   ```bash
   cmake ..
   ```
4. Build the project:
   - On Linux/macOS: `make`
   - On Windows: Open the generated solution in Visual Studio and build

## Dependencies

- SFML 2.5.1 or later
- CMake 3.10 or later
- C++11 compatible compiler
 
## Acknowledgments

- Thanks to the SFML team for the excellent multimedia library 
