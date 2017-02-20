#Chapter 6
### by David Papp

##Memory management

#####1) Which memory management functions would you expect to take constant time? Which ones take time proportional to the size of the allocated chunk?
Constant time: malloc, free
O(n) time: calloc, realloc

#####2) For each of the following memory errors, give an example of something that might go wrong:


#####a) Reading from unallocated memory.
Segmentation fault or the unallocated memory might be read despite containing random or leftover values.

#####b) Writing to unallocated memory.
Since the data structures are stored along allocated chunks, writing past the limit of the chunk can ruin these data structures and can cause problems down the line.

#####c) Reading from a freed chunk.
The data in the freed chunk might be random or leftover bits. Same problem as reading from unallocated memory.

#####d) Writing to a freed chunk.
Similar to writing to unallocated memory. The data might not be read for a long time after and this can cause problems down the line.

#####e) Failing to free a chunk that is no longer needed.
This causes a memory leak, which reduces the available memory size, potentially to the point of malloc failing.

#####3) Run ps aux --sort rss to see a list of processes sorted by RSS, which is "resident set size", the amount of physical memory a process has. Which processes are using the most memory?
Google Chrome


#####4) What's wrong with allocating a large number of small chunks? What can you do to mitigate the problem?
Allocating a large number of small chunks is inefficient. It requires more overhead and leads to fragmentation. To mitigate the problem, it's generally better to allocate larger chunks of similar or the same sizes.yes 


