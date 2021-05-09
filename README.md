# 👿 Center of Hell Sort 👿

A sorting algorithim created in 30 minutes. A very horrible one at that, the goal of this project was
to create the worst worst sorting algorthim I could using the `C` progrmming langauge.

### How does it work?

* First the center of the array is stored as a variable `center`
* Swap the `center` element of the array with the `i`th element (starting at 0th index)
* Iterate through the array until list is sorted

**Note!**
However because this is a horrible sort, the majority of array combinations will result in an infinite loop
(Could not be infinite, but waiting such a long time would be only pain)

#### Example:
In this example we start with a 5 element array `2 4 1 5 3`

```
[2] 4 [1] 5 3 
1 [4] [2] 5 3
1 2 [4] 5 3
1 2 [4] [5] 3
1 2 [5] 4 [3]

Sorted in 5 steps
1 2 3 4 5
```

#### Notes
If you could make this sort even worse, without changing the code too much I will be both joyous and impressed!
Feel free to recreate this in other langauges!
