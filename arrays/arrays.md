# Arrays 

In this program we have designed a class called **array**. It contains an array **arr** of 5 **int**s. The functions like **insert()**, **del()**, **display()**, **reverse()** and **search()** access and manipulate the array **arr**.

The **insert()** function takes two arguments, the position **pos** at which the new number has to be inserted and the number **num** that has to be inserted. In this function, firstly through a loop, we have shifted the numbers from the specified position, one place to the right of their existing position. Then we have place the number **num** at position **pos**.

The **del()** function deleted the element present at the given position **pos**. For this we have shifted the numbers placed after the position from where the number is to be deleted, one place to the left of their existing positions. Then number at position **pos** is then overwritten with 0.

In **reverse()** function we have reversed the entire array by swapping the elements **arr[0]** with arr[4]**, **arr[1]** with **arr[3]** and so on. Note that swapping should continue for **MAX / 2** times only, irrespective of whether **MAX** is odd or even.

The **search()** functio searches the array for the specified number. For this the compairson is carried out until either the list is exhausted or a match is found. If the match is not found then the function displays the relevant message.

In the **display()** function, the entire array is traversed to display the elements of the array.
