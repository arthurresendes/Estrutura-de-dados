def empilha(lista,valor):
    if len(lista) == 5:
        return "Pilha cheia"
    else:
        lista.append(valor)
        return lista

def desempilha(lista):
    while lista:
        lista.pop()
    return f"Pilha Vazia {lista}"

def main():
    lista = []
    for i in range(1,6):
        print(empilha(lista,i))
    print(lista)
    
    print(desempilha(lista))


if __name__ == "__main__":
    main()