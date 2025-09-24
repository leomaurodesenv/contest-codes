# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
value = float(input())
money = {100:0, 50:0, 20:0, 10:0, 5:0, 2:0}
coins = {1:0, 0.5:0, 0.25:0, 0.1:0, 0.05:0, 0.01:0}

for k in money.keys():
    money[k] = int(value/k)
    value = float("%.2f" % (value - float(money[k]*k)))
for k in coins.keys():
    coins[k] = int(value/k)
    value = float("%.2f" % (value - float(coins[k]*k)))

print("NOTAS:")
for k,v in money.items():
    print(f"{v} nota(s) de R$ {k:.2f}")
print("MOEDAS:")
for k,v in coins.items():
    print(f"{v} moeda(s) de R$ {k:.2f}")
