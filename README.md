# Project-6-Program-Design
Project 6, Program Design
DNA is a sequence of molecules called nucleotides, arranged into a particular shape (a double
helix). Each nucleotide of DNA contains one of four different bases: adenine (A), cytosine (C),
guanine (G), or thymine (T).
Scientists often represent DNA strands with a string of letters like this:
CTAGATAGTAGACAGATTAAGATGAT
Some portions of this sequence are the same, or at least very similar, across almost all humans,
but other portions of the sequence have a higher genetic diversity and thus vary more across the
population. One place where DNA tends to have high genetic diversity is in Short Tandem
Repeats (STRs). An STR is a short sequence of DNA bases that tends to be repeated back-to-
back numerous times at specific locations in DNA. For example, the STR AGAT repeated three
times in the sequence CTAGATAGTAGACAGATTAAGATGAT.
STRs are widely used in biological research. STRs are useful in applications such as the
construction of genetic maps, gene location, genetic linkage analysis, and identification of
individuals.
In this program, you will calculate the number of times that a STR is repeated in a DNA
sequence provided in a file.
Example input/ouput:
Enter the file name for the DNA sequence: DNA_sequence1.txt
Enter STR: AGAG
Output: AGAG is repeated 3 times
Technical requirements:
1. Name your program STR.c
2. Prompt the user to enter a file name for the DNA sequence and a STR.
3. Assume the input file name is no more than 100 characters.
4. Read the DNA sequence from the file. DNA sequences are stored as one line of
characters in the files.
5. Assume length of DNA sequences is no more than 20000 characters.
6. The program should include the following function:
int count_repeats(char *sequence, char *STR);
The function expects sequence to point to a string containing the DNA sequence and
STR to point to a string containing the STR. The function returns the number of repeats
of STR in the sequence. String library functions are allowed.
7. In the main function, call count_repeats function and display how many times a
STR is repeated in the sequence.
Before you submit
1. Compile both programs with –Wall. –Wall shows the warnings by the compiler. Be sure
it compiles on student cluster with no errors and no warnings.
gcc –Wall STR.c
2. Be sure your Unix source file is read & write protected. Change Unix file permission on
Unix:
chmod 600 STR.c
3. Test your fraction program with the shell scripts on Unix:
chmod +x try_STR
./try_STR
4. Submit STR.c, DNA_sequence1.txt, and DNA_sequence2.txt (for grading purpose) on
Canvas.
Grading
Total points: 100
1. A program that does not compile will result in a zero.
2. Runtime error and compilation warning 5%
3. Commenting and style 15%
4. Functionality 80% (Including functions implemented as required)
Programming Style Guidelines
The major purpose of programming style guidelines is to make programs easy to read and
understand. Good programming style helps make it possible for a person knowledgeable in the
application area to quickly read a program and understand how it works.
1. Your program should begin with a comment that briefly summarizes what it does. This
comment should also include your name.
2. In most cases, a function should have a brief comment above its definition describing
what it does. Other than that, comments should be written only needed in order for a
reader to understand what is happening.
3. Information to include in the comment for a function: name of the function, purpose of
the function, meaning of each parameter, description of return value (if any),
description of side effects (if any, such as modifying external variables)
4. Variable names and function names should be sufficiently descriptive that a
knowledgeable reader can easily understand what the variable means and what the
function does. If this is not possible, comments should be added to make the meaning
clear.
5. Use consistent indentation to emphasize block structure.
6. Full line comments inside function bodies should conform to the indentation of the code
where they appear.
7. Macro definitions (#define) should be used for defining symbolic names for numeric
constants. For example: #define PI 3.141592
8. Use names of moderate length for variables. Most names should be between 2 and 12
letters long.
9. Use underscores to make compound names easier to read: tot_vol or
total_volumn is clearer than totalvolumn
