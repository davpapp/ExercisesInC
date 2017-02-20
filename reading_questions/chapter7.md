#Chapter 7
## by David Papp

###Caching

#####1) What happens if a program writes a new value into the program counter?
The program counter contains the memory address of the next instruction. If the program writes a new value into this, the program will go to execute a new a command.

#####2) What is the fundamental problem caches are meant to solve?
CPUs can execute instructions in 0.5ns, while fetching and writing to memory is in the order of 10ns. This creates a bottleneck effect.

#####3) If cache access time is 1 ns and memory access time is 10 ns, what is the average access time of a program with hit rate 50%? How about 90%?
50%: 1ns * 0.5 + 10ns * 0.5 = 5.5ns
90%: 1ns * 0.9 + 10ns * 0.1 = 1.9ns

#####4) The book gives several examples of programming language features, like loops, that tend to improve locality in the access pattern of instructions and/or data. Can you think of other examples? Or counter-examples that might decrease locality?
Examples: Recursive approaches
Counter-examples: Linked data structures might not have spatial locality

#####5) If you refactor a program to improve locality, would you say the program is "cache aware"? Why not?
No. Cache aware refers to tailoring your code to specific hardware for the purpose of improving performance. Improving locality will likely improve performance regardless of hardware.

#####6) See if you can estimate the cost of a memory cache by comparing the prices of two similar CPUs with different cache sizes.
Refurbished i5-760 2.8 GHz 8MB Cache: $72
Refurbished i5-650 3.2 GHz 4MB Cache: $70
I don't think these prices are representative at all. The price difference is likely much greater, I just couldn't find great examples.

#####7) Why are cache policies generally more complex at the bottom of the memory hierarchy?
Cache policies on the bottom have more time to make decisions, so more complex algorithms can be implemented to predict memory usage behavior. Near the top of the hierarchy, decisions have to be made faster and thus cannot be as complex.

#####8) Can you think of a strategy operating systems could use to avoid thrashing or recover when it occurs?
If the OS detects a change in paging, it could detect or kill processes to make memory. This would reduce the amount of time it takes for the system to switch back to a task.

Run the cache code on your laptop or another computer and see if you can infer the cache size and block size.
If you can find the technical specifications for your computer, see if your inferences are right.

#####1) In this directory you should find a subdirectory named cache that contains cache.c and supporting files. Read cache.c, then run make and ./cache.

#####2) Run python graph_data.py to see the results. What can you infer about the cache structure on your computer?
I ran the makefile and ./cache but it did not produce a data file for use in graph_data.py. I'm guessing the cache is somewhere from 4MB to 8MB.
