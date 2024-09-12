Um algoritmo deve ser correto e terminar.
A sequência de instruções pode estar correta, mas ela se encerra?
Os recursos necessários são tempo e memória!
O tempo é o principal (quando há algo errado, o erro é quase exponencial!!)
O algoritmo resolve o problema, mas demora uma ano... NÃO USE!
Existem algoritmos que realizam as mesmas tarefas, mas de maneiras diferentes (podem resultar em uma diferença de eficiência)
É necessário um cuidado extra ao tomar decisões: 
    - Qual máquina foi usada? 
    - Qual linguagem foi usada? 
    - O algoritmo "ruim" foi bem implementado? 
    - O processamento de dados grandes e pequenos é equivalente? 


A ideia é generalizar as medições, independentemente de hardware, linguagem... 
A análise é do algoritmo, não do programa!

## A ideia básica...
Cadastrar 10 pessoas leva mais tempo que 5...
Devemos analisar com base em n elementos.
Com n entradas, deve-se calcular todas as operações a serem realizadas sobre os n elementos.
O melhor algoritmo é aquele que realiza menos operações e resulta no mesmo resultado!

## Operações? Quais?
Um operação é literalmente qualquer coisa (variaveis, loops, comparações, etc) 
As operações não levam o mesmo tempo!
Uma leitura de arquivo, por exemplo, é MUITO mais lenta que um printf! 
O tempo de cada operação é constante, o que muda é o número de chamadas da operação! 
Um algoritmo pode ser representado como uma função com entrada n. 
Assim, ao comparar dois algoritmos, podemos dizer em quais pontos cada algoritmo é melhor. 
A taxa de crescimento é ponto chave! 

## Contas (chatas)
A <strong>Taxa Assintótica</strong> descreve a eficiência quando n é muito grade! 
Algumas operações, no entando, não dependem de n -> constantes! 
Conceitos matemáticos -> expoentes, logarítimos, séries... 
Algoritmos com log são excelentes!!!! (geralmente a base é 2, exceto quando especificado)
Exponencial é o pior caso de todos (muito ruim mesmo) 

## Notações
A função $T(n)$ representa o algoritmo. 
A função $O(f(n))$ é a "big oh" da nossa função. 
Nesse caso, é valido dizer que o algoritmo é $O(f(n))$ se existe uma constante e um n inical maiores que 0. 
$$
T(n) = O(f(n)) \space \spaceT(n) \le cf(n)
$$
Essa notação nos diz que, começando com um determinado n inicial, a função $f(n)$ (nosso algoritmo) ficará abaixo (ou junto) da função $g(n)$ (função que estamos comparando)
$g(n)$ é o limite superior.

A função $T(n)$ representa o algoritmo. 
A função $\Omega(f(n))$ é a "ômega" da nossa função. 
Nesse caso, é valido dizer que o algoritmo é $\Omega(f(n))$ se existe uma constante e um n inical maiores que 0. 
$$
T(n) = \Omega(f(n)) \space \space  T(n) \ge cf(n)
$$
Essa notação nos diz que, começando com um determinado n inicial, a função $f(n)$ (nosso algoritmo) ficará acima (ou junto) da função $g(n)$ (função que estamos comparando)
$g(n)$ é o limite inferior.

A função $T(n)$ representa o algoritmo. 
A função $\Theta(f(n))$ é a "theta" da nossa função. 
$$
T(n) = \Theta(f(n)) \space \space T(n) = cf(n)
$$
Essa notação nos diz que, começando com um determinado n inicial, a função $f(n)$ (nosso algoritmo) ficará junto da função $g(n)$ (função que estamos comparando)

