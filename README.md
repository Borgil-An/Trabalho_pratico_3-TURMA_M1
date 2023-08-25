# Trabalho_pratico_3-TURMA_M1
Trabalho pratico 3 da turma m1 do aluno Gustavo Reginatto (Exercicio 671 leetcode)

Problema em questão: Dado uma árvore binária especial não vazia composta por nós com valores não negativos, onde cada nó nesta árvore tem exatamente dois ou zero subnós. 
Se o nó tiver dois subnós, então o valor deste nó é o valor menor entre seus dois subnós. De forma mais formal, a propriedade root.val = min(root.left.val, root.right.val) sempre é verdadeira.
Dada uma árvore binária desse tipo, você precisa exibir o segundo menor valor no conjunto formado por todos os valores dos nós em toda a árvore.
Se nenhum segundo menor valor existir, exiba -1 em vez disso.

Casos de sucesso: Input: root = [2,2,5,null,null,5,7]
                  Input: root = [2,2,2]
                  Input: root = [2,2,2147483647]



O que funcionou ou não: Não funcionou tentar resolver o problema totalmente pela força bruta (37/39 dos casos funcionam no primeiro código).
Funcionou usar recursividade de função.
