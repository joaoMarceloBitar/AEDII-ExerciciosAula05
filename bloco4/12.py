vetor = [0,1,2,3,4,5,6,7,8,9]

def inversao(vetor):
    i = 0
    j = len(vetor)-1

    while(i<j):
        aux = vetor[i]
        vetor[i] = vetor[j]
        vetor[j] = aux
        i+=1
        j-=1
    
    print(vetor)


inversao(vetor)