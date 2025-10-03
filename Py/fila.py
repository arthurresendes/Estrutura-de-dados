from collections import deque

def alocando(lista,valor):
    if len(lista) == 10:
        return "Fila cheia"
    else:
        lista.append(valor)
        return lista

def saindo(lista):
    while lista:
        lista.popleft()
    return f"Fila Vazia {lista}"

def main():
    lista = deque()
    for i in range(1,11):
        print(alocando(lista,i))
    print(lista)
    print(saindo(lista))


if __name__ == "__main__":
    main()