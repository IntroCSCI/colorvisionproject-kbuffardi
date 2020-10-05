# Complete Colorblindness Simulator

## Description

Get the red, green, and blue values from the user
and determine if that combination creates a color that is
black, white, grey, or another hue.

Each red, green, and blue value should be between 0-255.

If the user enters invalid numbers, they are prompted to 
correct the values.

## Developer

Kevin Buffardi

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
!!!Replace with an example of the program running with user interaction!!!
```

## C++ Guide

### Variables and Data Types

I used `int` to represent red, green, and blue because images often represent colors with combinations of those three components as values between 0-255, which are whole numbers.

I used `char` to represent either 'y' or 'n' to allow the user to select whether they want to repeat the program. Both 'y' and 'n' are single-letter values, that are best represented as a character.

### Input and Output

!!!Replace with a summary and examples of how input and output have been used effectively and appropriately!!!

### Decisions

!!!Replace with a summary and examples of how multiple decision constructs have been used effectively and appropriately!!!

### Iteration

I used a do-while loop for gathering input of red, green, and blue. I used a do-while because we always want to gather the user's input *at least* once.

### File Input and Output

!!!Replace with a summary and examples of how input and/or output of files have been used effectively and appropriately!!!   
