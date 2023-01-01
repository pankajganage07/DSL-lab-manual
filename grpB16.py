"""
Write a Python program to store first year percentage of students in array. Write function for
sorting array of floating point numbers in ascending order using quick sort and display top
five scores.

"""

#program has errors in it

#function for partition
def partition(a,low,high):
    pivot = a[low]
    i = low+1
    j = high
    while(i<=j):
        while(a[i]<= pivot):
            i+=1
        while(a[j]>=pivot):
            j-=1
        if(i<j):
            a[i],a[j] = a[j],a[i]

        #at this position we will find the partition position
    a[low], a[j] = a[j],a[low]
    return j

#function for quick sort
def quick_sort(a,low, high):
    while(low<high):
        pi = partition(a,low,high)
        quick_sort(a, low, pi-1)
        quick_sort(a, pi+1, high)
        return a
      

#funtion to take input
def take_inp(a):
    
    print("Enter percentage of students: ")
    for i in range (0,n):
        a.append(float(input()))
    return a

#driver program
print("Enter number of students: ")
n = int(input())
a =[]
take_inp(a)
quick_sort(a,0, n-1)
for i in range(0,n):
    print(a[i],end = " ")
