# Struct padding

The compiler can add unused bytes inside a struct so that every member sits at an
address that fits its type (an `int` on a multiple of 4, a pointer on a multiple of 8).
This is called padding, and it makes memory access faster.

Because C keeps the members in the order I write them, I can reduce the padding by
putting the largest members first. My `myStructureCar` from: [StructPointersToFunction.c](../../structures/structPointersToFunctionc.c) has none: `sizeof` is 80, which
is exactly 30+30+4+8+8.

![example of a struct that uses padding](/docs/structpadding/structpaddingphoto.png)


Now the solution from w3schools should be that in a structure, i should group the largest member at the top first so i can actually make the struct smaller.

![example of a struct that does not use padding](/docs/structpadding/reducepadding.png)

This is actually really important, as this helps the cpu to make the program run faster because of good memory management.
Bad structs uses more byte than it should to - and i also know that i have already done this, especially with the car struct where i define the int year; of the car last instead of putting this at the top of the struct and the char - but each `char` contains 30 `bytes` so it is okay, but just a reminder to next time..


### The plan was never to document anything, but I feel now that I should, as I keep working on this project.