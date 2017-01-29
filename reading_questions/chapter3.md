#Chapter 3

##Virtual memory

###1) The Georgian alphabet has 33 letters. How many bit are needed to specify a letter?
6 bits

###2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits. Ignoring the details of the encoding scheme, how many different characters can be represented?
2^32 = 4294967296

###3) What is the difference between "memory" and "storage" as defined in Think OS?
Storage will refer to HDDs and SSDs, whereas memory will refer to the main memory that is usually the RAM.

###4) What is the difference between a GiB and a GB? What is the percentage difference in their sizes?
GB: 10^9 bytes. GiB: 2^30 bytes. 1 GB is 7.3% greater than 1 GiB.

###5) How does the virtual memory system help isolate processes from each other?
The virtual memory in each of the processes map to physical memory such that they avoid overlap. This ensures that there are no collisions.

###6) Why do you think the stack and the heap are usually located at opposite ends of the address space?
This ensures that the two can extend until all the memory is used up. If the two were randomly placed, the stack and the heap would either have to be reallocated or fragmented as they expanded.

###7) What Python data structure would you use to represent a sparse array?
Dictionary (map)

###8) What is a context switch?
A context switch is the mechanism by which a process is interrupted and saved for later retrieval. When switching processes, the page table needs to be loaded into the MMU.

###In this directory, you should find a subdirectory named aspace that contains aspace.c. Run it on your computer and compare your results to mine.

###1) Add a second call to malloc and check whether the heap on your system grows up (toward larger addresses).

Grows from  0x184c010 to 0x184c0a0.
###2) Add a function that prints the address of a local variable, and check whether the stack grows down.
Address of local is 0x7ffcd47040e4.
Address of local is 0x7ffd3712262c.
Yes.

###3) Choose a random number between 1 and 32, and allocate two chunks with that size. How much space is there between them? Hint: Google knows how to subtract hexadecimal numbers.
(Hex) 0x90 = 144
