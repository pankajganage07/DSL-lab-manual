"""a) Write a Python program to store roll numbers of student in array who attended training
program in random order. Write function for searching whether particular student
attended training program or not, using Linear search and Sentinel search.
b) Write a Python program to store roll numbers of student array who attended training
program in sorted order. Write function for searching whether particular student attended
training program or not, using Binary search and Fibonacci search
"""

#list are mutable keep that in mind

#function for linear search

def linear_search(n,arr,key):
        found = 0
        for i in range(0,n):
            if(arr[i]==key):
                found = 1
                break
        if(found == 1):
                print("student attended traning program")
        else:
                print("student did not attend traning")

#function for sentenial search

def sentenial_search(n,arr,key):
    save = arr[n-1]
    arr[n-1] = key
    i = 0
    while(arr[i] != key):
        i+=1
    arr[n-1] = save
    if(i<n-1 or arr[n-1] == key):
        print("student attended traning program")
    else:
        print("student did not attended traning program")


#function for binary search

def binary_search(n,arr, key):
    found = 0
    s = 0
    e = n-1
    m = round((s+e)/2)
    while(s<=e):
        if(arr[m]==key):
            found = 1
            break
        elif(key<arr[m]):
            e = m-1
        else:
            s = m+1
        m = round((s+e)/2)
    if(found == 1):
        print("student attende the traning program")
    else:
        print("student did not attended the traning program")


#function for fibonacci search

#taking input of students who attended traning
print("Enter number of students who attended traning program(): ")
n = int(input())
a = []
print("plz give input in sorted form coz same will be used for binary search")
for i in range(0,n):
    print("Enter roll no of stud who attended traning program: ")
    a.append(int(input()))
print("enter roll of student who u want to check for: ")
key = int(input())
print("output for linear search: ")
linear_search(n,a,key)
print("output for sentenial search: ")
sentenial_search(n,a,key)
print("output for binary search: ")
binary_search(n, a , key)