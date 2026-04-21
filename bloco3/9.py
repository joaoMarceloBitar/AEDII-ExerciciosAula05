vetor = [None] * 5
tamanhoAtual = 0
limite = 5

for i in range(6):
    if tamanhoAtual == limite:
        novoLimite = limite * 2
        novoVetor = [None] * novoLimite
        for j in range(tamanhoAtual):
            novoVetor[j] = vetor[j]

        vetor = novoVetor
        limite = novoLimite

    vetor[tamanhoAtual] = 1
    tamanhoAtual += 1
    print(f"itens: {tamanhoAtual}, capacidade real: {limite}")


print(vetor)