# CCP Assignments

### Overview

<img src="/332_C/assignment_01/outputs/logo.png" alt="Logo" height="100" width="100" style="float:right">
This repository is a collection of open-source implementation of assignment from Central Calcutta Polytechnic. The implementation meant to be a learning source for future students and program enthusiasts.

### Features

- Well documented source code with detailed explanation.
- VS Code build and debug scripts.
- Execution example screenshots.
- Latex documentation of the assignments.
- Auto generated pdf for each tags. `[Coming Soon]`
- Organized by year, semester and subject code (for say, Data Structure's Sub-Code is 336)

### Table of contents

* #### Third Semester

  - [332_C-Programming](332_C/)
  - [336_Data-Structure](336_DS/)

* #### Fourth Semester
  - [430_Relational-Database-Management-System](430_RDBMS/)
  - [431_Object-Oriented-Programming](431_OOP/)
  - [432_Computer-Graphics](432_CG/)
  - [PPII_Web-Development](PPII_WebDev/)

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


