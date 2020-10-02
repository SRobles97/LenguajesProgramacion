class User:
 def __init__(self,name,email):
  self.name = name
  self.email = email
  self.account_balance = 0
 def make_deposit(self,amount):
  self.account_balance += amount
  return self
 def make_withdrawal(self,amount):
  self.account_balance -= amount
  return self
 def display_user_balance(self):
  print("Usuario: {},Saldo: ${}".format(self.name,self.account_balance))
  return self
 def transfer_money(self,other_user,cantidad):
  self.make_withdrawal(cantidad)
  other_user.make_deposit(cantidad)
  return self
class BankAccount:
 def __init__(self,int_rate=0.01,balance=0):
  self.int_rate = int_rate
  self.balance = balance
 def deposit(self,amount):
  print("Se ha hecho un depósito de ${} a su cuenta".format(amount))
  self.balance += amount
  return self
 def withdraw(self,amount):
  if self.balance > amount:
   print("Se han retirado ${} de su cuenta".format(amount))
   self.balance -= amount
  else:
   print("Fondos insuficientes. Se cobrará una tarifa de $5")
   self.balance -= 5
  return self
 def display_account_info(self):
  print("Saldo: ${}".format(self.balance))
  return self
 def yield_interest(self):
  if self.balance > 0:
   self.balance += self.balance*self.int_rate
  return self

 
juan = User("John","donwea@gmail.com")
roberto = User("Robert","robertrujillo@gmail.com")
carlos = User("Carl","carlos666@gmail.com")
juan.make_deposit(50).make_deposit(150).make_deposit(500).make_withdrawal(100).display_user_balance()
roberto.make_deposit(500).make_deposit(1000).make_withdrawal(800).make_withdrawal(100).display_user_balance()
carlos.make_deposit(5000).make_withdrawal(1000).make_withdrawal(1000).make_withdrawal(1000).display_user_balance()
juan.transfer_money(carlos,10).display_user_balance()
carlos.display_user_balance()

cuentaUno = BankAccount()
cuentaDos = BankAccount(0.02,1500)
cuentaUno.deposit(100).deposit(50).deposit(10).withdraw(10).yield_interest().display_account_info()
cuentaDos.deposit(1000).deposit(500).withdraw(500).withdraw(500).withdraw(500).withdraw(500).yield_interest().display_account_info()

