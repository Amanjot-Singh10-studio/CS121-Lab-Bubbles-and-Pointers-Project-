# CS121-Lab-Bubbles-and-Pointers-Project-
## Algorithm 

This program will sorts 9 number which will use bubble sort by using functions and pointer. 

```
main(): # this is the main function where the progam start
    create values array with 9 numbers {7, 3, 9, 4, 6, 1, 2, 8, 5}
             #this will store the 9 number which is not in the corrct order and we will store these number. 
    print "Before"
             # this will show that these are the number before sorting. 
    printValues(values) 
             # this line will send the array to printValues so all the number can be displayed 
    int x = 3 and y = 5 
             # these two number 3 and 5 which is value of x and y will check if swap is working. 
    print x and y 
             # this will shows x and y values before they swapped/ 
    swap(x and y)
             # this will switched their values 
    print x andy after swap 
             # thisshow that x and y is switched 
    sort(values) 
             # this will sort function to start bubble sorting
    print(after)
             # this will show that sorting is finished and will show the number before and after. 
    printValues(values)
             # this will print the number after it's sorted. 
    return 0 
             # this will end program

printValues(): #this will print all the number in the array 
    int i    # i keep tracking what is the current postion in the array. 
    print([)    #print "[" bracket is used so it put the number in the bracket eg. [1,2,3,4,5...
    for i 0 to max -1   # this will start first position and it will through all 9 positons. 
    print (value[i])    # this will print the number of the current positon. 
    Print (])   # this "]" bracket is used so it put the number in the bracket eg. [1,2,3,4,5...]. 

sort()  # this will sort the number 
    int i and j     # i keep tracking of each pass and j moves through the numbers. 
    for (i = 0 to max -1:   # this will repeat the sort through the array. 
    for (j = 0 to max -i -1:    #this will move the unsorted number and will compares next to each other. 
    if array[j] > array [j + 1]:  # this will check if the current number is bigger than the next number. 
    swap (array[j] and array [j+1] # this will switch two numbers if they are in wrong order. 
    printValues(array)     # this will print the array after each swap to sorting 

swap() # this will switch two values
    int temp    # this will hold one value temporary. 
    temp = *a # this will save the first number in temporary. 
    *a = *b     # this will put the second number in the first number place. 
    *b = temp   # this will put the first number in the second number place. 
```
