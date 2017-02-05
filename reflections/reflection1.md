#Reflection 1
### David Papp


###Sprint Review

Some of the essential goals of Sprint 1 were to split up tasks into logical subsets, tackle integration early, and learn the basics of C from readings and exercises. The first two go hand in hand: by splitting up tasks, we were able to have a working graphical prototype of a Rubik’s cube, some understanding of optimized solutions, unit tests, and a standardized notation for representing a cube. Following eduScrum guidelines likely contributed to our success. In particular, the daily 5-minute stand ups were invaluable in dividing work and assessing our progress. However, we also think that our progress was slowed by the frequency and formality of sprint planning, reviews, and reflections. With so many assignments, much of my time that I would have preferred to spend coding and doing reading exercises was spent elsewhere. We will aim to stray away from this next sprint. Furthermore, our kaizen is to leave every meeting with a clearly-defined task which we can work on before class. The goal of this is to encourage implementation rather than general tasks such as “explore” and “read about”.


In terms of reading and exercises, we aimed to complete two chapters of both HFC and ThinkOS. In the following sprints, I hope to actually write C code (rather than C++, which I used for graphics) for the sake of cementing knowledge. So far, I have not figured out how the readings are relevant to our project in terms of bug-free, efficient C code.


One unexpected thing that was not originally amongst my sprint goal was to become more efficient at pair-programming and using Git. I already knew the basics, but my teammates had tons of prior experience with more formal development tools such as lint, makefiles, and more. I absorbed much of this and am confident that this will aid me in a more official programming environment. Overall, I think the sprint was very successful and if I have any concerns, it’s regarding the algorithms and math group theory behind solving a Rubik’s cube optimally.


### Reading Questions

#### Head First C

Note: our sprint goal was to do the first two chapters, but I tried to get ahead.

Exercise 01: https://github.com/davpapp/ExercisesInC/tree/master/exercises/ex01

Exercise 02: https://github.com/davpapp/ExercisesInC/tree/master/exercises/ex02

Exercise 02.5: https://github.com/davpapp/ExercisesInC/tree/master/exercises/ex02.5

Exercise 03: https://github.com/davpapp/ExercisesInC/tree/master/exercises/ex03


#### Think OS

All reading question answers are in the following folder (in markdown format):
https://github.com/davpapp/ExercisesInC/tree/master/reading_questions


### Exam Question
Give an example of when you might use a pointer to a pointer in C? What about a pointer to a pointer to a pointer?

### Exam Question Solution
Source: Head First C

A matrix or 2 dimensional array is represented with a pointer to a pointer. For example, in a real world setting, the if we take a library of books, the first pointer might represent the location of a shelf of Young Adult books. Then a pointer to a pointer would represent the locations of all the shelves in the library. 

Similarly, a pointer to a pointer to a pointer represents a 3 dimensional array. We can use this to represent a Rubik’s cube, or to continue our earlier analogy, to represent a collection of libraries.
