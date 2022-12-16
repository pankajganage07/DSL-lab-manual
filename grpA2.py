"""Write a Python program to store marks scored in subject “Fundamental of Data Structure” by
N students in the class. Write functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency"""

fds=[]
n = int(input("Enter number of students: "))
print("Enter marks of students: ")
for i in range(0,n):
    data = int(input())
    fds.append(data)

def printing_marks():
    for i in range(0,n):
        print(fds[i], end = " ")
    print()


def avg_score():
    sum = 0
    avg = 0
    for i in range(0,n):
        if(fds[i]==-1):
            continue
        sum = sum + fds[i]
    avg = sum/n
    return avg

def highest_score():
    highest = 0
    for i in range(0,n):
        if(fds[i]>highest):
            highest = fds[i]
    return highest

def lowest_score():
    lowest = 100
    for i in range(0,n):
        if(fds[i]== -1):
            continue
        if(fds[i]<lowest):
            lowest = fds[i]
    return lowest

def absent_count():
    count = 0
    for i in range(0,n):
        if(fds[i]== -1):
            count+=1
    return count

def max_freq():
    count = 0
    max_freq = 0
    for i in range(0,n):
        if(fds[i]==-1):
            continue
        count = 0
        for j in range(0,n):
            if(fds[i]==fds[j]):
                count+=1
        if(count>max_freq):
            max_freq = count
            max_freq_marks = fds[i]

    print("marks wiht highest freq is: ",max_freq_marks)

#main program
printing_marks()
print("Average score of class is: ",avg_score())
print("Highest score of class is: ", highest_score())
print("Lowest score of class is: ", lowest_score())
print("Count of Absent students: ",absent_count())
max_freq()
