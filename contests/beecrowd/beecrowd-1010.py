# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
cp1, np1, vp1, = (input()).split()
cp2, np2, vp2, = (input()).split()
total = (int(np1) * float(vp1)) + (int(np2) * float(vp2))
print(f"VALOR A PAGAR: R$ {total:.2f}")
