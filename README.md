
🏗️ Estrutura de Dados

**Repository**: [arthurresendes/Estrutura-de-dados](https://github.com/arthurresendes/Estrutura-de-dados)

**Descrição Oficial**: Conteúdo ministrado na faculdade da matéria de estrutura de dados em C + exercícios por fora.

Repositório abrangente cobrindo as estruturas de dados fundamentais, essencial para qualquer desenvolvedor que deseje construir aplicações eficientes e escaláveis.

---

## 🎯 Objetivo

Dominar os conceitos fundamentais de estrutura de dados através de implementação prática em C e Python. Este repositório fornece tanto a teoria quanto implementações práticas, preparando para entrevistas técnicas e desenvolvimento profissional de qualidade.

---

## 📋 Estrutura do Projeto

---

## 🔧 Tecnologias Utilizadas

- **C** (96.7%) - Linguagem primária (baixo nível)
- **Python** (3.3%) - Validação e comparação (alto nível)
- **GCC/Clang** - Compiladores C
- **Memory Management** - Gestão avançada de memória

---

## 📖 Tópicos Abordados Detalhadamente

### 1. **Ponteiros em C** 
📍 `C/Ponteiros/`

**O que é abordado**:
- Declaração e inicialização de ponteiros
- Operadores `*` (dereference) e `&` (address-of)
- Aritmética de ponteiros
- Ponteiros para ponteiros
- Funções com ponteiros (pass by reference)
- Evitando erros comuns (dangling pointers, null pointers)

**Relevância**: Fundamental para qualquer trabalho com C e linguagens de baixo nível

---

### 2. **Alocação Dinâmica de Memória**
📍 `C/Alocação/`

**O que é abordado**:
- `malloc()` - alocação dinâmica
- `free()` - liberação de memória
- `calloc()` - alocação com inicialização
- `realloc()` - redimensionamento
- Detecção e prevenção de memory leaks
- Stack vs Heap
- Fragmentação de memória

**Relevância**: Essencial para programação eficiente em C e entrevistas

---

### 3. **Pilhas (Stack)**
📍 `C/Pilha/`

**O que é abordado**:
- Estrutura LIFO (Last-In-First-Out)
- Operações: push, pop, peek, isEmpty
- Implementação com array
- Implementação com lista encadeada
- Aplicações práticas (parentheses matching, undo operations)
- Análise de complexidade

**Aplicações Reais**:
- Histórico de navegação (browser back button)
- Undo/Redo em editores
- Avaliação de expressões matemáticas
- DFS em grafos

---

### 4. **Filas (Queue)**
📍 `C/Fila/`

**O que é abordado**:
- Estrutura FIFO (First-In-First-Out)
- Operações: enqueue, dequeue, peek, isEmpty
- Implementação com array circular
- Implementação com lista encadeada
- Deque (double-ended queue)
- Análise de complexidade

**Aplicações Reais**:
- Print queues (gerenciador de impressão)
- CPU scheduling
- BFS em grafos
- Processamento de requisições (web servers)

---

### 5. **Listas Encadeadas (Linked Lists)**
📍 `C/Lista Encadeada/`

**O que é abordado**:
- Nós e referências
- Singly Linked Lists
- Doubly Linked Lists

---

## 🚀 Como Usar Este Repositório

### Aprendizado Progressivo

**Sequência Recomendada**:
1. Comece com **Ponteiros** (entender conceitos básicos)
2. Continue com **Alocação** (gerenciamento de memória)
3. Implemente **Pilha** (primeira estrutura simples)
4. Implemente **Fila** (estrutura parecida, diferentes operações)
5. Estude **Listas Encadeadas** (estrutura mais complexa)

### Para Compilar Código C
```bash
# Compilar arquivo simples
gcc -o programa programa.c

# Compilar com flags de debug
gcc -g -Wall -o programa programa.c

# Compilar e rodar
gcc -o programa programa.c && ./programa
