""" Write a Python program that computes the net amount of a bank account based a transaction
log from console input. The transaction log format is shown as following: D 100 W 200
(Withdrawal is not allowed if balance is going negative. Write functions for withdraw and
deposit) D means deposit while W means withdrawal.
Suppose the following input is supplied to the program:
D 300, D 300 , W 200, D 100 Then, the output should be: 500 """

def deposit(amount):
  global balance
  print("depositing some amount")
  balance = balance + amount

def withdraw(amount):
  global balance
  print('withdrawing some amount')
  if(balance>= amount):
     balance = balance - amount
     print("amount deducted sucessfully")
  else:
    print("error withdrawing amount : balance low")
balance = 0
list =[]


while(True):
    data = input(print("enter transcation details: "))
    if(data == "exit"):
      break
    list.append(data.split())

print(list)

for i in list:
  if(i[0]=='D'):
    deposit(int(i[1]))
  elif(i[0]=='W'):
    withdraw(int(i[1]))


print("balance is : ", balance)