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

Houve dificuldades na função push_back(vet, qtd, value) pois não funcionava para iniciar o vetor, acabava adicionando lixo e não possuia ordem. Tentei encontrar alguma função do c parecida com o push_back(), olhei também no Leancpp.com e não encontrei solução para o problema.
Não busquei a monitoria mas toda vez que ia resolver um novo exercicio passado, voltava a tentar. destinei umas 8-9h.


#	02_queimada


	Árvores são geradas aleatóriamente e uma é escolhida para se iniciar o fogo. Os numeros vão incrementando de acordo com a sequencia de árvores que são queimadas até o 0.
	
	Atividade:
		Queimar árvores;
		Contar árvores queimadas;
		Mostrar caminho da recursão;

O código feito em C++, contem um contador para saber quantas vezes a função foi chamada e isto descobrir quantas árvores foram queimadas juntamente servindo para acrescentar os numeros que mostram a recursão do 0 ao 9 de acordo com a tabela ascII.
Não possui dificuldades em resolver este problema uma vez que tinha entendido mais ou menos como funcionava e juntado isto ao contador, me deu a ideia para conclusão do exercicio.

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
A maior dificuldade no método reserve(), apesar do conceito dele estar fácil, para mim foi o exercicio dificil devido a linguagem nova e o ponteiro de this->_data. Busquei ajuda com amigos que entendiam mais de C++ e pesquisei em sites mas apenas davam um exemplo. 


#	04_fractais


	Fractais 

	Atividade:
		Embuá;
		Embuá recursivo;
		Árvore;
		Alterar a Árvore conforme  gosto pessoal;
		Implementar outros 3(três) fractais;


Utilizei de papel e caneta para ir desenhando conforme ia implementando o código para ter noção de como iria se comportar mas é muito complicado pois quando acha que vai dá certo sai algo diferente, é necessessário muita paciência e muito tempo para sair "certo".
A maior dificuldade nessa tarefa foi achar videos explicativos uma vez que só tinham fractais mais parecidos com imagens. Os materiais para estudo foram os videos da disciplina e estudando com colegas. Cada fractal requer tempo apesar das pequenas linhas de código. 


#	05_labirintos


	Labirintos
	
	Atividades:
		Gerando o Labirinto (recursivo);
		Achando o caminho entre dois pontos no labirinto (recursivo);
		Achando o caminho entre dois pontos no labirinto (pilha);
		Gerando o Labirinto (pilha);




#	06_Fila (list)

	Listas

	Atividades:
		Fazer os metódos utilizados em listas;
		Fazer o método remove(int value) interativo;

Fui me baseando pelo métodos push_back(), pop_back() e _remove(int value) (este apesar de ser recursivo). Eles continham pedaços que davam para aproveitar. No caso, a maior dificuldade seria ligar o elemento anterior ao proximo da lista depois que excluisse o value.
Ex:
Removendo o 2.
1 - 2 - 3
Tendo que ligar o 1 ao 3.

1 - 3


