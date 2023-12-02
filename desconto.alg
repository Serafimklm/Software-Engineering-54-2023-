Algoritmo "algoritmo desconto"

// Data atual  : 02/12/2023 estrutura leia escreva
Var
   // Se??o de Declara??es das vari?veis
   preco, percentualdesconto, valordesconto, valorapagar: real

Inicio
   // Se??o de Comandos, procedimento, fun??es, operadores, etc...
   escreva ("informar o valor do produto:")
   leia (preco)
   escreva ("informar a porcentagem de desconto:")
   leia (percentualdesconto)
   valordesconto <- (preco * percentualdesconto) / 100
   valorapagar <- preco -valordesconto

   escreva ("o valor a pagar ?:", valorapagar)
   escreva ("o valor do desconto ?", valordesconto)

Fimalgoritmo