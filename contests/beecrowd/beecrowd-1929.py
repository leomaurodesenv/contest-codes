# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
values = input().split(" ")
a, b, c, d = [int(v) for v in values]

if a + b > c and b + c > a and a + c > b:
    print('S')
elif b + c > d and c + d > b and b + d > c:
    print('S')
elif a + c > d and c + d > a and a + d > c:
    print('S')
elif a + b > d and b + d > a and a + d > b:
    print('S')
else:
    print('N')
