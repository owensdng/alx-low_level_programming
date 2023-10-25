# Makefiles and Island Perimeter - Tasks README

**Author:** Noah Owens
**Email:** noahowensdng@gmail.com

This repository contains solutions for a set of tasks related to Makefiles and a Python script for calculating island perimeters. Below, you'll find descriptions of each task and their corresponding files.

## Task 0: Create a basic Makefile

In this task, I created a simple Makefile to build an executable named "school." The Makefile includes a rule called "all" that builds the executable.

- File: [0-Makefile](0-Makefile)
- Command to Build: `make -f 0-Makefile`

## Task 1: Makefile with Compiler and Source Files

For this task, I extended the Makefile to include variables for the compiler (`CC`) and source files (`SRC`). The Makefile has a rule named "all" that builds the executable using the defined variables.

- File: [1-Makefile](1-Makefile)
- Command to Build: `make -f 1-Makefile`

## Task 2: Makefile with Object Files

In this task, I created a Makefile with support for object files. It includes variables for the compiler (`CC`), source files (`SRC`), object files (`OBJ`), and the executable name (`NAME`). The Makefile can recompile only updated source files.

- File: [2-Makefile](2-Makefile)
- Command to Build: `make -f 2-Makefile`

## Task 3: Advanced Makefile with Cleaning Rules

For this task, I created an advanced Makefile with cleaning rules. It includes variables for the compiler (`CC`), source files (`SRC`), object files (`OBJ`), executable name (`NAME`), and the program to delete files (`RM`). The Makefile has rules for "all," "clean," "oclean," "fclean," and "re."

- File: [3-Makefile](3-Makefile)
- Command to Build: `make -f 3-Makefile`

## Task 4: Complete Makefile with Compiler Flags

In this task, I extended the Makefile from Task 3 to include compiler flags. It defines variables for the compiler (`CC`), source files (`SRC`), object files (`OBJ`), executable name (`NAME`), the program to delete files (`RM`), and compiler flags (`CFLAGS`).

- File: [4-Makefile](4-Makefile)
- Command to Build: `make -f 4-Makefile`

## Task 5: Island Perimeter (Python Script)

This task is not related to Makefiles. Instead, I created a Python script for calculating the perimeter of an island in a grid. The script defines a function `island_perimeter` that follows the specified requirements.

- File: [5-island_perimeter.py](5-island_perimeter.py)

## Task 6: Advanced Makefile with Constraints

For this advanced task, I extended the Makefile from Task 4 with additional constraints. It enforces specific usage limits for variables like `CC`, `RM`, and `CFLAGS`.

- File: [100-Makefile](100-Makefile)
- Command to Build: `make -f 100-Makefile`

Feel free to explore each task for more details and build the corresponding files using the provided commands.
