#Reflection 2
### David Papp


###Sprint Review

In Sprint 1, we lay the groundwork for implementing the representation and graphics of a cube. 

My personal goal for this sprint was to learn about algorithmic approaches to solving a cube. In the previous sprint, I learned that there exists a 52 move solution. After about a week of trying to wrap my head around this approach, I made almost no progress in understanding the underlying group theory and math. Part of the problem was finding articles that were managable with my level of knowledge. I relearned (after some 5 years) how to solve a Rubik's cube the basic way, but such a solution would have been hard-coding simple patterns repeatedly. This is part of the reason our team decided to pivot and refocus our efforts on a brute-force approach that relies on threading. 

Although we fell behind in the middle of sprint due to being overconfident in our ability to finish the project, we made significant progress towards the end. We divide tasks up appropriately (my focus was on writing a DFS algorithm to create a tree of possible moves) and dealt with integration. We now have a solid idea of the data structures we will be dealing with, and the functions of different parts. One of our milestones was successfully integrating graphics in C++ with DFS logic and threading in C. Now that we have a firm grasp on what the program will do, my main concern is around actual implementation in C and dealing with memory, threading, and debugging. 

In terms of reading and exercises, I completed chapter 4 of HFC and Chapters 4-6 of ThinkOS. I also read chapters 10 and 12 about processes and threading, but have not yet completed exercise 10. However, since our project involves threading, I will learn to apply it soon enough.

Once again, my teammates were incredibly helpful in teaching me good workplace coding practices. This involved branching and merging on Github as well as using lint and makefiles. I'm still not at the same level of efficiency as they are, but already feel more prepared for a formal workplace.


### Reading Questions

#### Head First C

Exercise 03: https://github.com/davpapp/ExercisesInC/tree/master/exercises/ex03

Exercise 04: https://github.com/davpapp/ExercisesInC/tree/master/exercises/ex04

I also read chapter 12 about threading.

#### Think OS
For this sprint, I got ahead by completing ThinkOS Chapters 4-7.

All reading question answers are in the following folder (in markdown format):
https://github.com/davpapp/ExercisesInC/tree/master/reading_questions


### Exam Question

Write a program that counts the number of bits set in an integer using bitwise operations. Do not use built in functions like popcount.

### Exam Question Solution
Source: Think OS Chapter 5 (Bitwise Operations)

int bitCount (int value) {
	int count = 0;
	while (value > 0) {
		if ((value & 1) == 1) count++;
		value >>= 1;
	}
	return count;
}

Note that this is one of many possible solutions. There exists quicker solutions but this is one of the most intuitive ones.
