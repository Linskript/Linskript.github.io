class venda {
    codigo : number
    data : number
    cliente : Cliente
    produtos : produto[]
}

function calcularTotal(produto : produto) : void {
    console.log(produto.valor)
    }