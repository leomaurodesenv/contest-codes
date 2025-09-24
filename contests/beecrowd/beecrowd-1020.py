# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
days = int(input())
years = int(days/365)
days = days%365
months = int(days/30)
days = days%30
print(f"{years} ano(s)")
print(f"{months} mes(es)")
print(f"{days} dia(s)")
