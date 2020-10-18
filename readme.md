# C Unity Test Framework Docker starter project

## Dependencies
Docker needs to be installed on the host machine

## Reference
This repo uses the Unity C Test framework: http://www.throwtheswitch.org/unity
- Refer to https://github.com/ThrowTheSwitch/Unity/blob/master/src/unity.h for a quick reference to the possible test asserts
- Pull this down and update the include path for your IDE to utilize intellisense

## Usage
- The makefile will automatically search for the source files that match the name for any file starting with `Test_` in the `tests/src` directory, example:
  - File under test: `app/starterExample.c`
  - Test File: `app/tests/src/Test_starterExample.c`

Run
```
./build.sh
```
Once built, run
```
./run_tests.sh
```

