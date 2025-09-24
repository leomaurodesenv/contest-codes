# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
qt = int(input())
for _ in range(qt):
    name1, choice1, name2, choice2 = input().split(" ")
    value1, value2 = input().split(" ")
    total = int(value1) + int(value2)
    
    if total%2 == 0 and choice1 == "PAR":
        print(name1)
    elif total%2 == 1 and choice1 == "IMPAR":
        print(name1)
    else:
        print(name2)
