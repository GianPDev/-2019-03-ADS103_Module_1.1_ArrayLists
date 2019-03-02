Module 1.1 - ArrayLists (Uni work)
==================================

“You are asked to create your own list including at least 5 items you bought in
the last week.”

The video discusses everything in Java but you need to use C++ to write your own
solution.

Lynda.com. (n.d.). Array Lists. From Java: Data Structures. Retrieved
from [https://www.lynda.com/Java-tutorials/ArrayLists/534633/594588-4.html?srchtrk=index%3a2%0alinktypeid%3a2%0aq%3adata+structures%0apage%3a1%0as%3arelevance
%0asa%3atrue%0aproducttypeid%3a2](https://www.lynda.com/Java-tutorials/ArrayLists/534633/594588-4.html?srchtrk=index%3a2%0alinktypeid%3a2%0aq%3adata+structures%0apage%3a1%0as%3arelevance%0asa%3atrue%0aproducttypeid%3a2)

Preview:
https://github.com/GianPDev/-2018-03-_Module_1.1_ArrayLists/blob/master/Screenshots/ArrayList.webm

\-----------

Notes
-----

Array can expand as needed.

Duplicates allowed.

Indexed, add/remove elements by index.

 

Difficulties / Notes:

-   In the language I learned; Haxe, Arrays can dynamically change size or be at
    a fixed size depending on how it’s created, so it was a surprise that Arrays
    in C++ are only fixed size.

-   The task only specifies creating “your own list of including at least 5
    items”, does not specify if you need to create a List or a ArrayList data
    type.  
    The task links to a video about Array Lists, but does not specify whether or
    not to use it.

-   In Haxe, it is easy to get the length of the array by getting
    arrayOfThings.length

-   Haxe Arrays is declared similar to C++ vectors  
    Haxe:  
    `var arrayOfThings:Array<String>;`  
    C++:  
    `using namespace std;`  
    `vector<string> arrayOfThings;`

-   Getting the size of an array or vector returns an unsigned int. I had
    warnings because I just created signed int for my for loop iterators

-   In C++, functions must be placed before main (need to test if this is
    necessary in Haxe)
