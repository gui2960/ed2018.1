Diretório reservado a trabalhos de ED - 2018.1

# RELATÓRIO DAS ATIVIDADES:


#	01_princesa


 	Tem-se um grupo de amigos e a Princesa escolhe um dos participantes para ficar com a faca e ele mata o proximo da fila
	
	Atividade:
		Fazer em C++;
		Fazer em C;

O código primeiramente feito em C++ e adaptado para C.
Recebemos 2 números (quantidade de jogadores e quem irá começar com a faca), geramos um vetor que irá armazenar o numero de jogares em suas respectivas posições. 
O vetor será iniciado com a função push_back() e rodado até que quem estiver com a faca esteja no final. Após isso será utilizado o pop_front() que é a função para excluir o vetor da frente, novamente um push_back(). Esses passos são feitos até que a quantidade do vetor seja 1 (o vencedor).

Houve dificuldades na função push_back(vet, qtd, value) pois não funcionava para iniciar o vetor, acabava adicionando lixo e não possuia ordem.


#	02_queimada


	Árvores são geradas aleatóriamente e uma é escolhida para se iniciar o fogo. Os numeros vão incrementando de acordo com a sequencia de árvores que são queimadas até o 0.
	
	Atividade:
		Queimar árvores;
		Contar árvores queimadas;
		Mostrar caminho da recursão;

O código feito em C++, contem um contador para saber quantas vezes a função foi chamada e isto descobrir quantas árvores foram queimadas juntamente servindo para acrescentar os numeros que mostram a recursão do 0 ao 9 de acordo com a tabela ascII.

#	03_vetores
	
	
	Funções que utilizamos no código só que feitas manualmente.
	Ex: pop_front(), push_back(), vetor.front();

	Atividade:
		Criar funções prontas que utlizamos nos códigos;
		Implementar a função reserve();

Quando se criar um vetor tem-se dados (blocos de dados), size (tamanho do vetor) e capacidade (quantos elementos estão inseridos). Uma struct com esses atibutos foi criada e dentro dela, métodos do tipo:
	v.size() --> nos indicando o tamanho do vetor
	v.reserve --> reserva uma capacidade para o vetor
	v.at() ---> nos retorna à referência a variável desta posição
A maior dificuldade no método reserve() foi criar um if que suprisse as condições da capacidade. Que se a capacity antiga fosse maior que a nova e/ou a capacity fosse menor que o bloco salvo nela.


