### Chapter 4 Think OS Answers

#1) What abstractions do file systems provide? Give an example of something that is logically true about files systems but not true of their implementations.
File systems keep implement a key-value database-like abstraction. This greatly simplifies work for programmers: rather than having to keep track of the 
physical location of blocks of storage, which might be fragmented, only the key of the data must be known. The file system also provides abstraction for 
reading and writing files. 

#2) What information do you imagine is stored in an OpenFileTableEntry?
The OpenFileTableEntry might store the size, type, date, and current location within the file, amongst a number of other things.

#3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage?
- Switch to another process while waiting for storage
- Block transfer: keeps the processor busy with work on each block while the next one is loaded
- Prefetching: the OS might preload additional blocks of memory if it predicts that they will be required.
- Buffering: minimizes the number of times data is actually written into storage from memory
- Caching: recently used blocks of memory are more likely to be used again, and thus they are cached for quicker retrieval.

#4) Suppose your program writes a file and prints a message indicating that it is done writing.
Then a power cut crashes your computer. After you restore power and reboot the computer, you find that the file you wrote is not there. What happened?
The program likely used buffering to minimize the number of times data is written into storage. Instead, it performed the operations in memory, so when 
the computer crashed, it did not have the time to write the memory into storage despite the message.

#5) Can you think of one advantage of a File Allocation Table over a UNIX inode? Or an advantage of a inode over a FAT?
One advantage of FAT is that fragmentation does not result in loss of maximum storage capacity. An advantage of an inode over a FAT might be quicker 
performance, due to the fact that FAT operates similar to a linked list and thus to find an appropriate file, the link list has to be travsersed.

#6) What is overhead? What is fragmentation?
Overhead is any excess data, computation time, or other resource that is required for a particular goal. In the context of file systems, overhead
is typically for keeping track of data structures.
Fragmentation is the inefficient use of storage for performance or capacity purposes. 

#7) Why is the "everything is a file" principle a good idea? Why might it be a bad idea?
The file abstraction principle allows different processes to communicate through a common form of data. This is evident in a variety of applications, 
such as network communication. It also gives programmers an abstraction that allows them to learn only one API, as well as versatility.
Some disadvantages of file abstraction might be additional overhead resulting and ineffiencies.