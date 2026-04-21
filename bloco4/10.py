largura = 3
vetor = [1,2,3,4,5,6,7,8,9]

def valorVetor(vetor, linha, coluna, largura):
    indice = linha * largura + coluna
    return vetor[indice]

vetorRetorno = valorVetor(vetor, 2, 2, largura)

print(vetorRetorno)