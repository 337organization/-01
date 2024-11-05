Python 3.13.0 (tags/v3.13.0:60403a5, Oct  7 2024, 09:38:07) [MSC v.1941 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def is_prime(num):
...     if num <= 1:
...         return False
...     for i in range(2, int(num**0.5) + 1):
...         if num % i == 0:
...             return False
...     return True
... 
... for i in range(1, 101):
...     if is_prime(i):
