"""Write a Python program to store first year percentage of students in array. Write function for
sorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores.
"""



#function for selection sort

def selection_sort(n, arr):
    for i in range(0,n):
        min_index = i
        for j in range(i+1,n):
            if(arr[j]<arr[min_index]):
                min_index = j
        #swap(arr[min_index], arr[i])
        arr[min_index], arr[i] = arr[i], arr[min_index]
#function for bubble sort

def bubble_sort(n,arr):
    for i in range(1,n):
        #no of rounds ie n-1 rounds for i
        for j in range(0,n-i):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1] = arr[j+1],arr[j]


#funtion to take input
def take_inp(n):
    a =[]
    print("Enter percentage of students: ")
    for i in range (0,n):
        a.append(float(input()))
    return a

#printing array
def display(n,a):
    for i in range(0,n):
       print(a[i],end=" ")
    print()




#driver program
print("Enter number of students: ")
n = int(input())
a = take_inp(n)
display(n,a)
selection_sort(n,a)
print("output for selectio sort: ")
display(n,a)
a = take_inp(n)
display(n,a)
bubble_sort(n,a)
print("output for bubble sort: ")
display(n,a)

print("top 5 score(obtained from bubble sorted array): ")
for i in range(0,5):
    print(a[n-1])
    n = n-1




