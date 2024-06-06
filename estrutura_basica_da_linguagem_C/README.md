# Características básicas da linguagem de programação C

## Introdução:
    
    Este artigo foi criado para expor as principais carcterísticas mais básicas da linguagem C. Explorando conceitos que irão dar ao leitor uma idéia básica de como funciona a sintaxe e a semântica da linguagem. 


## História da linguagem:

![Foto de Dennis Ritchie](./imagens/Dennis_Ritchie.jpg)

#### A pessoa da foto é [Dennis Ritchie](https://pt.wikipedia.org/wiki/Dennis_Ritchie), ele foi um dos criadores da linguagem.

A primeira versão da linguagem C foi introduzida em 1972 nos laboratórios Bell, onde esta versão seria incluida como um dos softwares que seriam apresentados no sistema operacional UNIX do computador PDP-11. A equipe encarregada deste trabalho era certificada por  [Ken Thompson](https://pt.wikipedia.org/wiki/Ken_Thompson). 

O surgimento da linguagem é oriúndo de uma linguagem de programação chamada [ALGOL](https://pt.wikipedia.org/wiki/ALGOL), que na época era considerada uma linguagem de alto nível, ou seja, permitia que o programador desenvolvesse sem se precupar muito com os aspéctos da máquina. O ALGOL não obteve muito suscesso, então depois de algum tempo, surgiu a [CPL](https://en.wikipedia.org/wiki/CPL_(programming_language)#:~:text=CPL%20(Combined%20Programming%20Language)%20is,the%20BCPL%20and%20B%20languages.), vindo das universidades de Londres e Cambridge. A CPL também não foi muito aceita na época, principalmente por projetistas de sistemas operacionais, que a consideravam difícil.

Após isso, foi criada a linguagem [BCPL](https://pt.wikipedia.org/wiki/BCPL) por Martin Richards, em Cambridge. Sua proposta era "manter apenas as coisas boas da CPL". Então, Ken Thompson criou um compilador para uma versão mais reduzida do CPL, e chamou esta criação de [linguagem B](https://pt.wikipedia.org/wiki/B_(linguagem_de_programa%C3%A7%C3%A3o)), sendo que a mesma era caracterizada por ser uma linguagem "lenta". Por esse e outros motivos, Dennis Ritchie foi encarregado de projetar uma nova linguagem, que seria suscessora da linguagem B. Foi ai que surgiu o que conhecemos hoje como linguagem C.

No início, o C tinha como propósito manter o contato de interação com o hardware, mas também conseguir proporcionar ao programador criar softwares diversos, tanto para a área cintífica, de engenharia e etc. O padrão de sintaxe desta versão criada, está presente principalmente no livro ["The C programming language"](https://en.wikipedia.org/wiki/The_C_Programming_Language), que é considerado a "bíblia" da linguagem. Uma das características principais que esta versão herdou, era a de que os programas criados podiam ser facilmente compilados e executados em outros computadores, dando a linguagem o rótulo de ser "Portável".

Em 1985, foi estabelecido um padrão para a linguagem, que foi denominado [C ANSI](https://en.wikipedia.org/wiki/ANSI_C). ANSI são as siglas da "American National Standards Institute" que foi a instituição que implementou este padrão. Há outra versão evoluida do C, conhecida como C++.

## Características gerais:

C é considerada uma linguageem de médio nível, ou seja, está entre os conceitos de linguagens de [alto e baixo nível](https://www.dio.me/articles/linguagens-de-programacao-de-alto-e-baixo-nivel). C  permite a manipulação de bytes e endereços de memória,  é uma linguagem que segue o paradígma de programação "estruturada", e tem suas implementações baseadas principalmente em [funções](https://www.ime.usp.br/~leo/mac2166/2017-1/introducao_funcoes.html). Com isso, é possível determinar que o principal componente estrutural do C são as funções, sendo que a principal função do programa é a denominada função "main()".

## Tipos primitivos:

As variáveis em C podem possuir os seguintes tipos básicos:
- char 
- int
- double 
- float

**Char**: Armazena um caractere ou uma cadeia de caracteres. Em C, não temos o tipo "String" definido, então, para armazenar um valor com mais de um caractere, é preciso criar um [vetor](https://linguagemc.com.br/vetores-ou-arrays-em-linguagem-c/) de caraceteres, onde cada índice do vetor corresponde a um valor da String. 

**Int**: É usado para armazenar valores numéricos inteiros, sendo que há um limite para o tamanho desses valores, que é de 4 bytes(32 bits). 

**Float**: Basicamente, é usado para armazenar valores de ponto flutuante, ou seja, valores com casas decimais estabeleciadas. Este tipo também consegue armazenar valores de até 4 bytes.

**Double**: Segue as mesmas implementações do tipo float, a diferença como o própio nome ja diz, é que neste tipo é possível armazenar o dobro do que se pode armazenar em float, ou seja, 8 bytes(64 bits).

#### Exemplo de implementação dos tipos citados:

![foto de ilustração da implementação dos tipos primitivos](./imagens/implementacao_dos_tipos_primitivos.PNG)

## Palavras reservadas:

Outro aspécto muito importante no conhecimento de uma linguagem, são as palavras reservadas, abaixo é mostrada uma lista com as palavras reservadas da linguagem C:

![palavras reservadas da linguagem C](./imagens/palavras_reservadas.PNG)

## Entrada e saida de dados:

A entrada e saida de dados 




























