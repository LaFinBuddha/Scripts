class Solution:
    def romanToInt(self, s: str) -> int:
        ValDict = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        IntVal = 0
        for i in range(len(s)):
            index = s[i]
            preindex = s[i-1]

            if i == 0:
                IntVal += ValDict[index]
            elif ValDict[index] > ValDict[preindex]:
                IntVal += ValDict[index]
                IntVal -= ValDict[preindex]*2
            else:
                IntVal += ValDict[index]
        
        return(IntVal)
