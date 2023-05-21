# Calculate Factorials and Combinations

Author: Mahdi Aouchiche (<https://github.com/mahdi-aouchiche/factorials-and-combinations>)

## Overview

* Most of calculators have a limited memory to calculate over 200 factorial. Using the `long double` data type which has a maximum value of

```c++
    numeric_limits<long double>::max() = 1.18973 E+4932
```

makes calculating up to `1754!` possible.  

>Note: If the factorial of a number to calculate is over 1754, this program will throw a memory overflow execption and the result will be infinity.  

* Since factorials are used in calculating combinations, this program allows the user to calculate either a factorial or a combination.  

### To run the project nicely use the following commands

```c++
cmake -S . -B build
cmake --build build/ 
```

### 1 executable is created, use one of the commands to run the executable

```c++
./build/calculate
```
