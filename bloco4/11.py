vetorPixels = [1,3,5,6,3,5,42,35,246,131,112,41]

def multiplicaPixels(vetor):
    for i in range(len(vetor)):
        var = vetor[i]
        if var * 1.2 > 225:
            vetor[i] = 225
        else:
            vetor[i] = var * 1.2

multiplicaPixels(vetorPixels)
print(vetorPixels)

