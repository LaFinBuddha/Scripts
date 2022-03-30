def search(matrix,target):
    i=0
    j=len(matrix[0])-1
    
    while i<len(matrix) and j>=0:
        tag=matrix[i][j]
        if tag==target:
            return True
            break
        if target<tag:
            j-=1
        else:
            i+=1
        
    return False