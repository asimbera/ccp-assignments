# CCP Assignments

### Overview

<img src="/c_lang/assignment_01/outputs/logo.png" alt="Logo" height="100" width="100" style="float:right">
This repository is a collection of open-source implementation of assignment from Central Calcutta Polytechnic. The implementation meant to be a learning source for future students and program enthusiasts.

### Features

- Well documented source code with detailed explanation.
- VS Code build and debug scripts.
- Execution example screenshots.
- Latex documentation of the assignments.
- Auto generated pdf for each tags. `[Coming Soon]`
- Organized by year, semester and subject.

### Table of contents

- [Third Semester]()

  - [Programming in C](c_lang)

    1. [x] [Basics I/O](c_lang/assignment_01)
    2. [x] [If-Else](c_lang/assignment_02)
    3. [ ] [Bitwise, Switch, Loops](c_lang/assignment_03)
    4. [x] [Array](c_lang/assignment_04)
    5. [x] [Function & Recursion](c_lang/assignment_05)
    6. [x] [Strings in C](c_lang/assignment_06)
    7. [ ] [Pointers](c_lang/assignment_07)
    8. [ ] [Structure & Union](c_lang/assignment_08)
    9. [x] [Pattern Printing](c_lang/assignment_09)

  - [Data Structure](data_structure)

    1. [ ] [Array]()
    2. [ ] [Stack & Queue]()

### Usage

I'm assuming you have somewhat knowledge of linux system and command line.

#### Cloning

- First, clone the repo with

  ```sh
  git clone https://github.com/asimbera/ccp-assignments.git
  ```

- Open project in Visual Studio Code with
  ```sh
  cd ccp-assignments
  code . -r
  ```
- Run any `*.c` file with opening the file in editor and press `F5` on keyboard.

  > Switch to integrated terminal to provide any input to the program.

- Each assignment have its own latex documentation. You can generate pdf from `*.latex` by
  ```sh
  pdflatex  -synctex=1 -interaction=nonstopmode -file-line-error -outdir=. -shell-escape README.tex
  ```
  > You must have `latex-most` package installed on your system and must be on path.
  > Update the `cover.tex` file in subject level directory to get you details on the front page.

### Feedback

If you find any kind of bug, error or typos, then fell free to create an issue or make a pull request. You can also reach me via [email](mailto:asimbera@outlook.in).
