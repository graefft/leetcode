####################
#### TIME ##########
#### O(n) ## 40ms ##
####################
class Solution:
    def intToRoman(self, num: int) -> str:
        romanString = ''
        while num >= 1000:
            romanString += 'M'
            num -= 1000
        if num >= 900:
            romanString += 'CM'
            num -= 900
        while num >= 500:
            romanString += 'D'
            num -= 500
        if num >= 400:
            romanString += 'CD'
            num -= 400
        while num >= 100:
            romanString += 'C'
            num -= 100
        if num >= 90:
            romanString += 'XC'
            num -= 90
        if num >= 50:
            romanString += 'L'
            num -= 50
        if num >= 40:
            romanString += 'XL'
            num -= 40
        while num >= 10:
            romanString += 'X'
            num -= 10
        if num == 9:
            romanString += 'IX'
            num -= 9
        while num >= 5 and num < 9:
            romanString += 'V'
            num -= 5
        if num == 4:
            romanString += 'IV'
            num -= 4
        while (num < 4 and num > 0):
            romanString += 'I'
            num -= 1
        return romanString
