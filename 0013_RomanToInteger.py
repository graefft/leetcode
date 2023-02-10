#!/usr/bin/python3

'''Converts Roman Numeral input to Integer'''

def romanToInt(s):
    conversions = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
    total = 0
    s = s.replace('IV', 'IIII').replace('IX', 'VIIII')
    s = s.replace('XL', 'XXXX').replace('XC', 'LXXXX')
    s = s.replace('CD', 'CCCC').replace('CM', 'DCCCC')

    for each_character in s:
        total += conversions[each_character]
    print(total)

romanToInt('MCMIV')
