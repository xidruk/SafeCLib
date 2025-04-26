# SafeClib - Secure Bounds-Checked C Library

[![License](https://img.shields.io/badge/License-Your_License_Here-blue.svg)](LICENSE)

A security-focused C library providing bounds-checked implementations of common memory/string operations to prevent buffer overflows and undefined behavior.

## Features

- **Memory Safety**: All operations validate buffer sizes
- **Error Handling**: Consistent error return values
- **Wide Character Support**: Safe wide string operations
- **Modular Design**:
  - **Concatenation Tools**: Safe memory/string concatenation
  - **Duplication Tools**: Secure data copying with transformation
  - **Copy Tools**: Memory/string copy operations with bounds checking
  - **Matching Tools**: Advanced search/comparison functions
  - **Size Utilities**: Safe string length calculations

## Installation

### Dependencies
- C compiler (GCC/clang)
- Make
- Standard C library

### Build & Install
```bash
# Clone repository
git clone https://github.com/yourusername/safeclib.git
cd safeclib

# Build libraries and main executable
make

# Install system-wide (optional)
sudo make install  # Might need to adjust paths
