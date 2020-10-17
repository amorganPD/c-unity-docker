# C Unity Test Framework Docker start project

- To get started, clone https://github.com/ThrowTheSwitch/Unity/ into a directory next to the parent directory of this repository

## Usage
- Under `tests/src` name the file Test_<`filename_undertest`>.c
  - The makefile will search the directory for any .c or .h file that matches <`filename_undertest`>
- Ensure your Unity directory path is correct within the makefile for variable `PATHUNITY`

