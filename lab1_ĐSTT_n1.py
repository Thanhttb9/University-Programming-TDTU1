# University-Programming
print ("excercise 6: ")
import numpy as np
arr = np.arange(12,39)
print (arr)
print ("exercise 7: ")
arr1 = np.array([1,2,3,4,5])
arr2 = np.array([3,4,5,6,7])
arrcommon = np.zeros(5, dtype = int)
i = 0
for x in arr1:
  for y in arr2:
    if y == x:
      arrcommon[i] = y
      i += 1
      continue
print ( arrcommon[:i])
