class No:
    def __init__(self,valor):
        self.valor = valor
        self.proximo = None

class Lista:
    def __init__(self):
        self.inicio = None
        self.fim = None
        self.tamanho  = 0
    
    def inserir(self,valor):
        novo = No(valor)
        if self.inicio is None:
            self.inicio = novo
            self.fim = novo
        else:
            self.fim.proximo = novo
            self.fim = novo
        self.tamanho += 1
    
    def exibir(self):
        atual = self.inicio
        elementos  = []
        while atual:
            elementos.append(atual.valor)
            atual = atual.proximo
        return elementos
    
    def remover(self,valor):
        atual = self.inicio
        anterior = None

        while atual and atual.valor != valor:
            anterior = atual
            atual = atual.proximo
        
        if atual is None:
            return False
        
        if anterior is None:
            self.inicio = atual.proximo
            if self.inicio is None:
                self.fim = None
        else:
            anterior.proximo = atual.proximo
            if atual == self.fim:
                self.fim = anterior
        
        self.tamanho -= 1
        return True
    
    def __len__(self):
        return self.tamanho

lista = Lista()
lista.inserir(10)
lista.inserir(20)
lista.inserir(30)

print("Lista:", lista.exibir())
print("Tamanho:", len(lista))  

lista.remover(20)
print("Após remover 20:", lista.exibir())
print("Tamanho:", len(lista)) 