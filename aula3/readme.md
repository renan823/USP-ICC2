## Aula 3 - Análise de algotimos
Um algoritmo deve ser correto e terminar.</br>
A sequência de instruções pode estar correta, mas ela se encerra?</br>
Os recursos necessários são tempo e memória!</br>
O tempo é o principal (quando há algo errado, o erro é quase exponencial!!)</br>
O algoritmo resolve o problema, mas demora uma ano... NÃO USE!</br>
Existem algoritmos que realizam as mesmas tarefas, mas de maneiras diferentes (podem resultar em uma diferença de eficiência)</br>
É necessário um cuidado extra ao tomar decisões: </br>
    - Qual máquina foi usada? </br>
    - Qual linguagem foi usada? </br>
    - O algoritmo "ruim" foi bem implementado? </br>
    - O processamento de dados grandes e pequenos é equivalente? </br>

</br>
A ideia é generalizar as medições, independentemente de hardware, linguagem... </br>
A análise é do algoritmo, não do programa!</br>

## A ideia básica...
Cadastrar 10 pessoas leva mais tempo que 5...</br>
Devemos analisar com base em n elementos.</br>
Com n entradas, deve-se calcular todas as operações a serem realizadas sobre os n elementos.</br>
O melhor algoritmo é aquele que realiza menos operações e resulta no mesmo resultado!</br>

## Operações? Quais?
Um operação é literalmente qualquer coisa (variaveis, loops, comparações, etc) </br>
As operações não levam o mesmo tempo!</br>
Uma leitura de arquivo, por exemplo, é MUITO mais lenta que um printf! </br>
O tempo de cada operação é constante, o que muda é o número de chamadas da operação! </br>
Um algoritmo pode ser representado como uma função com entrada n. </br>
Assim, ao comparar dois algoritmos, podemos dizer em quais pontos cada algoritmo é melhor. </br>
A taxa de crescimento é ponto chave! </br>

## Contas (chatas)
A <strong>Taxa Assintótica</strong> descreve a eficiência quando n é muito grade! </br>
Algumas operações, no entando, não dependem de n -> constantes! </br>
Conceitos matemáticos -> expoentes, logarítimos, séries... </br>
Algoritmos com log são excelentes!!!! (geralmente a base é 2, exceto quando especificado)</br>
Exponencial é o pior caso de todos (muito ruim mesmo) </br>

## Notações
A função $T(n)$ representa o algoritmo. </br>
A função $O(f(n))$ é a "big oh" da nossa função. </br>
Nesse caso, é valido dizer que o algoritmo é $O(f(n))$ se existe uma constante e um n inical maiores que 0. </br>
$$
T(n) = O(f(n)) \space \spaceT(n) \le cf(n)
$$
Essa notação nos diz que, começando com um determinado n inicial, a função $f(n)$ (nosso algoritmo) ficará abaixo (ou junto) da função $g(n)$ (função que estamos comparando)</br>
$g(n)$ é o limite superior.</br>

A função $T(n)$ representa o algoritmo. </br>
A função $\Omega(f(n))$ é a "ômega" da nossa função. </br>
Nesse caso, é valido dizer que o algoritmo é $\Omega(f(n))$ se existe uma constante e um n inical maiores que 0. </br>
$$
T(n) = \Omega(f(n)) \space \space  T(n) \ge cf(n)
$$
Essa notação nos diz que, começando com um determinado n inicial, a função $f(n)$ (nosso algoritmo) ficará acima (ou junto) da função $g(n)$ (função que estamos comparando)</br>
$g(n)$ é o limite inferior.</br>

A função $T(n)$ representa o algoritmo. </br>
A função $\Theta(f(n))$ é a "theta" da nossa função. </br>
$$
T(n) = \Theta(f(n)) \space \space T(n) = cf(n)
$$
Essa notação nos diz que, começando com um determinado n inicial, a função $f(n)$ (nosso algoritmo) ficará junto da função $g(n)$ (função que estamos comparando)</br>

