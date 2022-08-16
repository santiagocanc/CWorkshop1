#  C practice #1 
___
___

## This is the first practice workshop for the C language for the Parallel and Distributed Computing class. The intent is to teach on how to use header files, functions and Makefiles along with some other basic C syntax and logic. 

## This practice has 10 items in it, and the idea is to generate the necesary files to modularize it as best as possible, and to ease the compilation process with a Makefile.

## The solution was made into a CLI program which takes an arg to enter its 11 different functionalities.

# Environment:
GCC : gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0

___
# Compilation process
Download the contents in the source folder, and run the next command in a terminal in the current directory>
    
    make main

If you built it in the past, then run

    make clean
    make clear
    
and then rebuild
___
* # (0 / No arg) 
    ## Help menu
     ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L8)
    ![help](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss0.png)


___
- # (1)  
    Write a program in C that accepts two user inputted integers and returns their product
     ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L8)
    ![p1](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss1.png)
___
- # (2)  
    Write a program in C to convert n days into years, weeks and days. Do not take into account leap years.
     ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L42)
    ## [utils functions](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L23-L30)
    ![p2](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss2.png)
___
- # (3)  
    Write a program in C to calculat the distance between 2 points.
    ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L19)
    ## [utils functions](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L32)
    ![p3](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss3.png)
___
- # (4)  
    Write a program in C that shows the first 10 natural numbers.
    ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L58)
    ![p4](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss4.png)
___
- # (5)  
    Write a program in C that shows a triangle-like pattern using *. the amount of lines of the triangle will be a user input. 
    ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L67)
    ![p5](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss5.png)
___
- # (6)  
    Write a program that prints a ones matrix of size NxN. N is a user input. N must be lower than 8. 
    ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L84)
    ## [utils functions](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L38)
    ![p6](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss6.png)
___
- # (7)  
    Write a program that prints a random matrix of size NxN. N is a user input. N must be lower than 8. 
   ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L113)
   ## [utils functions](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L38)
    ![p7](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss7.png)
___
- # (8)  
    Write a program that prints two random matrix of size NxN. N is a user input. N must be lower than 8. Finally, the program must show the sum of both matrices.  
    ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L143)
    ## utils functions
    - [1](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L38)
    - [2](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L49)
    
    ![p8](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss8.png)
___
- # (9)  
     Write a program that prints two random matrix of size NxN. N is a user input. N must be lower than 8. Finally, the program must show the substraction of both matrices.  
    ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L178)
    ## utils functions
    - [1](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L38)
    - [2](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L62)
    
    ![p9](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss9.png)
___
- # (10)  
     Write a program that prints two random matrix of size NxN. N is a user input. N must be lower than 8. Finally, the program must show the matrix multiplication of both matrices.  
    ## [user function](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/practice_lib.c#L214)
    ## utils functions
    - [1](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L38)
    - [2](https://github.com/santiagocanc/CWorkshop1/blob/df74c474b57f1c583438643ab63e0e91e4c17e1d/source/utils.c#L74)
    
    ![p10](https://raw.githubusercontent.com/santiagocanc/CWorkshop1/main/imgs/ss10.png)

___

## With this we can conclude that, specially for larger projects, it is very useful to create a Makefile to ease the compiling process of various C files with their headers. 
___
# References
* Courouble, T. (2022). DevDocs — c documentation. Retrieved 13 August 2022, from https://devdocs.io/c/
* The GNU C Reference Manual. (2022). Retrieved 13 August 2022, from  https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html
* GNU make. (2022). Retrieved 13 August 2022, from https://www.gnu.org/software/make/manual/make.html
