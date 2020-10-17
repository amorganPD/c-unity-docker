# C Unity Test Framework Docker start project

## Dependencies
Docker needs to be installed on the host machine

## Usage
- The makefile automatically search for the source files that match the name for any file starting with `Test_` in the `tests/src` directory
  - File under test: `app/starterExample.c`
  - Test File: `app/tests/srcTest_starterExample.c`

Run
```
./build.sh
```
Once built, run
```
./run_tests.sh
```

